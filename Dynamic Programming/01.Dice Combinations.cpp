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
int m = (int)1e9+7;
unordered_map<int,int> mp;

int sol(int n){
	if(n<0) return 0;
	if(n==0) return 1;
	if(mp.find(n)!=mp.end()) return mp[n];
	int ans=0;
	for(int i=1;i<=6;i++){
		ans = (ans+sol(n-i))%m;
	} 
	return mp[n] = ans%m;
}

int main()
{

	int n;
	cin>>n;
	// int m = (int)1e9+7;
	// vector<int> dp(n+1,0);
	// dp[1]=1;
	// for(int i=2;i<=n;i++){
// 		
	// }
	cout << sol(n);
	return 0;
}