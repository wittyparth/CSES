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
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		pair<int,int> p = {y,x};
		v.push_back(p);
	}
	int ans=1;
	sort(v.begin(),v.end());
	int s=v[0].second,e=v[0].first;
	for(int i=1;i<n;i++){
		if(v[i].second>=e){
			s=v[i].second;
			e=v[i].first;
			ans++;
		}
	}
	cout << ans;
	return 0;
}