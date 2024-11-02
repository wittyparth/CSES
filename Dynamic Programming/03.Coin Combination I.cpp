// Problem: Coin Combinations I
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1635
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
const int m = (int)1e9 + 7;
ll dp[1000001];

int main()
{

	ll n,x;
	cin>>n>>x;
	vector<int> coins(n);
	for(int i=0;i<n;i++) cin>>coins[i];
	vector<ll> dp(x+1,0);
	dp[0]=1;
	for(int i=1;i<=x;i++){
		for(auto c:coins){
			if(i-c>=0) dp[i]= (dp[i]+dp[i-c])%m;
		}
	}
	cout << dp[x]%m;
	return 0;
}