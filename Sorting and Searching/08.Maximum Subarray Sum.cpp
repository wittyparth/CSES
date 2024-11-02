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
	vector<ll> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	ll sum=nums[0],ans=nums[0];
	for(int i=1;i<n;i++){
		if(sum<0) sum=nums[i];
		else sum+=nums[i];
		ans = max(sum,ans);
	}
	cout << ans;
	return 0;
}