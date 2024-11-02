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

	int n,m,diff;
	cin>>n>>m>>diff;
	vector<int> desired(n);
	for(int i=0;i<n;i++) cin>>desired[i];
	multiset<int> st;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		st.insert(x);
	}
	sort(desired.begin(),desired.end());
	int ans=0;
	for(int i=0;i<n;i++){
		// if(st.empty()) break;
		auto it = st.lower_bound(desired[i]-diff);
		if(it!=st.end() && *it<=desired[i]+diff){
			ans++;
			st.erase(it);
		}
	}
	cout << ans;
	return 0;
}