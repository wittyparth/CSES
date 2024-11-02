// Problem: Creating Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1622
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
set<string> ans;

void sol(string &str,string &t,vector<int> &vis,int n){
	if(t.length()==n){
		ans.insert(t);
		return;
	}
	for(int i=0;i<n;i++){
		if(vis[i]==0){
			t+=str[i];
			vis[i]=1;
			sol(str,t,vis,n);
			t.pop_back();
			vis[i]=0;
		}
	}
}

int main()
{

	multiset<char> s;
	string str;
	cin>>str;
	int n = str.size();
	vector<int> vis(n,0);
	string t = "";
	sol(str,t,vis,n);
	cout << ans.size() << endl;
	for(auto i:ans) cout << i << endl;
	return 0;
}