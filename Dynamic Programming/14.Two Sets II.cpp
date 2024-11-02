// Problem: Two Sets II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1093
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
const int MAX = 1e5;
const int mod = 1e9+7;
ll dp[500+1][MAX+1];

ll countSets(ll num,ll sum,ll n,ll target){
	//base case
	// cout << num << " " << sum << endl;/
	if(num>=n+1 || sum>target) return 0;
	if(target==sum) return 1;
	if(dp[num][sum]!=-1) return dp[num][sum]%mod;
	return dp[num][sum] = (countSets(num+1,sum,n,target)+countSets(num+1,sum+num,n,target))%mod;
}

int main()
{

	ll n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	ll sum = (n*(n+1))/2;
	if(sum%2==1) cout << 0;
	else cout << countSets(1,0,n,sum/2);
	return 0;
}