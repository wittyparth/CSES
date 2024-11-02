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

	ll n;
	cin>>n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin>>v[i];	
	sort(v.begin(),v.end());
	ll mid = v[n/2];
	ll cost =0;
	for(auto i:v) cost+=(abs(i-mid));
	cout << cost;
	return 0;
}