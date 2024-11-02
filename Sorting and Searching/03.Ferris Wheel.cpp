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

	int n,cap;
	cin>>n>>cap;
	vector<int> w(n);
	for(int i=0;i<n;i++) cin>>w[i];
	sort(w.begin(),w.end());
	int i=0,j=n-1;
	int ans=0;
	while(i<j){
		if(w[i]+w[j]<=cap){
			w[i]=-1;
			w[j]=-1;
			ans++;
			i++;
			j--;
		}
		else j--;
	}
	for(int i=0;i<n;i++){
		if(w[i]!=-1) ans++;
	}
	cout << ans;
	return 0;
}