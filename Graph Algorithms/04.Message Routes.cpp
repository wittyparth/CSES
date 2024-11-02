// Problem: Message Route
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1667
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
	vector<int> dist(n+1,INT_MAX);
	vector<int> prev(n+1);
	prev[1]=1;
	queue<int> q;
	dist[1]=1;
	q.push(1);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int child:adj[node]){
			if(dist[child]>1+dist[node]){
				dist[child] = 1+dist[node];
				prev[child] = node;
				q.push(child);
			}
		}
	}
	if(dist[n]!=INT_MAX){
		cout << dist[n] << endl;
		int x=n;
		vector<int> ans;
		while(x!=1){
			ans.push_back(x);
			x=prev[x];
		}
		ans.push_back(1);
		reverse(ans.begin(),ans.end());
		for(auto it:ans) cout << it << " ";
	}
	else cout << "IMPOSSIBLE";
	return 0;
}