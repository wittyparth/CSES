// Problem: Longest Flight Route
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1680
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
vector<bool> vis;
stack<int> st;

void dfs(vector<int> adj[],int node){
	vis[node]=true;
	for(auto child:adj[node]){
		if(vis[child]) continue;
		dfs(adj,child);
	}
	st.push(node);
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
	}
	vis.resize(n+1,false);
	dfs(adj,1);
	vector<int> dist(n+1,INT_MIN);
	dist[1]=1;
	vector<int> parent(n+1,1);
	
	while(!st.empty()){
		int node = st.top();
		st.pop();
		for(auto child:adj[node]){
			if(dist[child]<dist[node]+1){
				dist[child] = dist[node]+1;
				parent[child]=node;
			}
		}
	}
	if(dist[n]!=INT_MIN){
		cout << dist[n] << endl;
		int x=n;
		vector<int> ans;
		while(x!=1){
			ans.push_back(x);
			x = parent[x]; 
		}
		ans.push_back(x);
		for(int i=ans.size()-1;i>=0;i--) cout << ans[i] << " ";
	}
	else cout << "IMPOSSIBLE";
	return 0;
}