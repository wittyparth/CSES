// Problem: Building Roads
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1666
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
vector<int> vis;

void dfs(vector<int> adj[],int i){
	vis[i]=true;
	for(auto child:adj[i]){
		if(vis[child]) continue;
		dfs(adj,child);
	}
	// return;
}

int main()
{

	int n,m;
	cin>>n>>m;
	vector<int> adj[n+1];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	vis.resize(n+1,0);
	vector<int> sol;
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			dfs(adj,i);
			sol.push_back(i);
		}
	}
	cout << sol.size()-1 << endl;
	for(int i=1;i<(int)sol.size();i++) cout << sol[i-1] << " " << sol[i] << endl;
	return 0;
}