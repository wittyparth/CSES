// Problem: Array Description
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1746
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
int n,m;
vector<int> nums;
const int sz = 1e5;
int M = 1e9+7;
ll dp[101][sz+1];

ll sol(int i,int l){
	//base case
	if(dp[l][i]!=-1) return dp[l][i]%M;
	if(i==n) return 1;
	ll ans = 0;
	if(nums[i]!=0){
		if(l==0 || abs(nums[i]-l)<=1) ans = (ans+sol(i+1,nums[i]))%M;
	}
	else{
		if(l==0){
			for(int j=1;j<=m;j++){
				ans = (ans+sol(i+1,j))%M;
			}
		}
		else{
			for(int j=max(1,l-1);j<=min(l+1,m);j++){
				ans = (ans+sol(i+1,j))%M;
			}
		}
	}
	return dp[l][i] = ans;
}

int main()
{
	cin>>n>>m;
	nums.resize(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	memset(dp,-1,sizeof(dp));
	// int ans = 0;
	cout << sol(0,0);
	return 0;
}