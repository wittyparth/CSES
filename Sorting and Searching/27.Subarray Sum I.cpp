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

	int n,k;
	cin>>n>>k;
	vector<int> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	int i=0,j=0,ans=0,sum=0;
	while(j<n){
		sum+=nums[j];
		if(sum==k){
			ans++;
		}
		else if(sum>k){
			while(sum>k){
				sum-=nums[i];
				i++;
			}
			if(sum==k) ans++;
		}
		j++;
	}
	cout << ans;
	return 0;
}