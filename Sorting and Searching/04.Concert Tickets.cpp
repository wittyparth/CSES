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

	int n,m;
	cin>>n>>m;
	multiset<int> st;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		st.insert(x);
	}
	vector<int> cus(m);
	for(int i=0;i<m;i++) cin>>cus[i];
	for(int i=0;i<m;i++){
		auto it = st.lower_bound(cus[i]);
		if(*it==cus[i]){
			cout << *it << endl;
			st.erase(it);
		}
		else if(it==st.begin()){
			cout << -1 << endl;
		}
		else{
			--it;
			cout << *it << endl;
			st.erase(it);
		}
	}
	return 0;
}