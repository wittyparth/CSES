#include<bits/stdc++.h>
using namespace std;

int dfs(int v,int parent,vector<int> &depth,vector<int> &vis,vector<int> adj[]){
    // vis[v]=1;
    for(int child:adj[v]){
        // if(vis[child]) continue;
        if(parent==child) continue;
        depth[child]=depth[v]+1;
        dfs(child,v,depth,vis,adj);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> adj[n+1],adj1[n+1];
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj1[v].push_back(u);
        // adj[v].push_back(u);
    }
    vector<int> vis(n+1,0);
    vector<int> depth(n+1,0);
    dfs(1,-1,depth,vis,adj);
    for(int i=0;i<=n;i++) cout << depth[i] << " ";
    int max_depth = INT_MIN;
    int node;
    for(int i=1;i<=n;i++){
        if(max_depth<depth[i]){
            max_depth=depth[i];
            node=i;
        }
        depth[i]=0;
        vis[i]=0;
    }
    cout << node;
    dfs(node,-1,depth,vis,adj1);
    for(int i=0;i<=n;i++) cout << depth[i] << " ";
    cout << *max_element(depth.begin(),depth.end());
    return 0;
}