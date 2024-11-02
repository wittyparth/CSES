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
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		pair<int,int> p ={x,y};
		v[i]=p;
	}
	sort(v.begin(),v.end());
	set<int> st;
	int ans=0;
	for(int i=0;i<n;i++){
		st.insert(v[i].second);
		auto it = st.lower_bound(v[i].first);
		st.erase(st.begin(),it);
		ans = max(ans,(int)st.size());
	}
	cout << ans;
	return 0;
}