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
// unordered_map<ll,unordered_map<ll,bool>> m;
// 
// bool sol(ll a,ll b){
	// //base case
	// if(a<0 || b<0) return false;
	// if(a==0 && b==0) return true;
	// if(m.find(a)!=m.end() && m[a].find(b)!=m.end()) return m[a][b];
	// return m[a][b] = sol(a-1,b-2) || sol(a-2,b-1);
// }
// 
int main()
{
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if((a+b)%3==0 && (2*a-b)%3==0 && (2*b-a)%3==0 && (2*a-b)>=0 && (2*b-a)>=0) cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
	return 0;
}