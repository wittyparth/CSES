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

	int n,amount;
	cin>>n>>amount;
	vector<int> coins(n);
	for(int i=0;i<n;i++) cin>>coins[i];
	vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
	int inf = 1000001;
	for(int i=1;i<=amount;i++) dp[0][i] = inf;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=amount;j++){
			if(coins[i-1]<=j){
				dp[i][j] = min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
			}
			else dp[i][j] =dp[i-1][j];
		}
	}
	if(dp[n][amount]==inf) cout << -1;
	else cout << dp[n][amount];
	// cout << dp[n][amount];
	return 0;
}