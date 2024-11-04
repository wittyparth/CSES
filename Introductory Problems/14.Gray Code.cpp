// Problem: Gray Code
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/2205
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> ans;
void sol(int i,string &t){
	if(i==n){
		ans.push_back(t);
		return;
	} 
	t+="0";
	sol(i+1,t);
	t.pop_back();
	t+="1";
	sol(i+1,t);
	t.pop_back();
}

int main(){
	cin>>n;
	string t ="";
	sol(0,t);
	// sort(ans.begin(),ans.end());
	for(auto it:ans){
		cout << it << endl;
	}
	return 0;
}