// Problem: Book Shop
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1158
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

	int n,x;
	cin>>n>>x;
	vector<int> prices(n),pages(n);
	for(int i=0;i<n;i++) cin>>prices[i];
	for(int i=0;i<n;i++) cin>>pages[i];
	vector<vector<int>> dp(n+1,vector<int>(x+1,0));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x;j++){
			if(prices[i-1]<=j){
				int include = pages[i-1]+dp[i-1][j-prices[i-1]];
				int exclude = dp[i-1][j];
				dp[i][j] = max(include,exclude);
			}
			else dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][x];
	return 0;
}