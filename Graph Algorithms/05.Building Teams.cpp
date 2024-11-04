// Problem: Building Teams
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1668
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> adj;
vector<int> teams;

bool dfs(int node,int color){
	teams[node]=color;
	int clr;
	if(color==1) clr=2;
	else clr=1;
	bool ans = true;
	for(auto child:adj[node]){
		if(teams[child]==color) return false;
		if(teams[child]!=-1) continue;
		ans = ans && dfs(child,clr);
	}
	return ans;
}

int main(){
	cin>>n>>m;
	adj.resize(n+1);
	teams.resize(n+1,-1);
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bool flag = true;
	for(int i=1;i<=n;i++){
		if(teams[i]==-1 && !dfs(i,1)){
			flag=false;
			break;
		}
	}
	if(!flag) cout << "IMPOSSIBLE";
	else for(int i=1;i<=n;i++) cout << teams[i] << " ";
	return 0;
}