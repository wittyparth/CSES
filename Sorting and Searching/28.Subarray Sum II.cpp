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

	ll n,k;
	cin>>n>>k;
	vector<ll> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	map<ll,int> m;
	ll sum=0,ans=0;
		m[0]=1;
		for(int i=0;i<n;i++){
		sum+=nums[i];
		ans+=m[sum-k];
		m[sum]++;
		}
		cout << ans;
	return 0;
}