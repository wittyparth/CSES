// Problem: Grid Paths
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1638
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

int main()
{

	int n;
	cin>>n;
	int grid[n][n];
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		for(int j=0;j<str.length();j++){
			if(str[j]=='.') grid[i][j]=1;
			else grid[i][j]=0;
		}
	}
	int m = (int)1e9+7;
	vector<vector<ll>> dp(n,vector<ll>(n,0));
	for(int i=0;i<n;i++){
		if(grid[i][0]==0) break;
		dp[i][0]=1;
	}
	for(int j=0;j<n;j++){
		if(grid[0][j]==0) break;
		dp[0][j]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(grid[i][j]) dp[i][j] = (dp[i-1][j]+dp[i][j-1])%m;
		}
	}
	cout << dp[n-1][n-1];
	return 0;
}