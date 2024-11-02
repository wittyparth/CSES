// Problem: Factory Machines
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1620
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define	int long long

bool check(vector<int> &timing,int mid,int t){
	int total=0;
	for(auto it:timing) total+=(mid/it);
	return total>=t;
}

int32_t main(){
	int n,t;
	cin>>n>>t;
	vector<int> timing(n);
	for(int i=0;i<n;i++) cin>>timing[i];
	int l=0,r=t*(*min_element(timing.begin(),timing.end()));
	int ans=-1;
	while(l<=r){
		int mid = l + (r-l)/2;
		if(check(timing,mid,t)){
			r=mid-1;
			ans=mid;
		}
		else l=mid+1;
	}
	cout << ans;
	return 0;
}