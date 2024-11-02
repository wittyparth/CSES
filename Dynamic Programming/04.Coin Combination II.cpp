// Problem: Coin Combinations II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1636
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

const int MAX = 1e6;
int n,sum;
vector<int> coins;
int dp[101][MAX+1];
int mod = 1e9+7;

int sol(int i,int sum){
	if(i==n) return 0;
	if(sum==0){
		return 1;
	}
	if(dp[i][sum]!=-1) return dp[i][sum];
	int ans=0;
	if(coins[i]<=sum){
		ans = (ans+sol(i,sum-coins[i]))%mod;
	}
	ans = (ans+sol(i+1,sum))%mod;
	return dp[i][sum] = ans;
}

int main()
{
	cin>>n>>sum;
	coins.resize(n);
	for(int i=0;i<n;i++) cin>>coins[i];
	memset(dp,-1,sizeof(dp));
	int t[MAX+1];
	t[0]=1;
	for(int i=0;i<n;i++){
		for(int j=1;j<=sum;j++){
			if(coins[i]<=j) t[j] = (t[j-coins[i]+t[j]])%mod;
		}
	}
	cout << t[sum];
	return 0;
}