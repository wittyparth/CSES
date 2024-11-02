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
vector<int> v = {-1,0,1,0,-1};

void dfs(vector<int> grid[],vector<vector<int>> &vis,int i,int j){
	int n=vis.size(),m=vis[0].size();
	vis[i][j]=1;
	for(int k=1;k<(int)v.size();k++){
		int x =i+v[k-1],y=j+v[k];
		if((x>=0 && x<n) && (y>=0 && y<m) && vis[x][y]==-1 && grid[x][y]==1) dfs(grid,vis,x,y);
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> grid[n];
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		vector<int> v;
		for(auto ch:str){
			if(ch=='.') v.push_back(1);
			else v.push_back(0);
		}
		grid[i]=v;
	}
	vector<vector<int>> vis(n,vector<int>(m,-1));
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vis[i][j]==-1 && grid[i][j]==1){
				// cout << i << " " << j << endl;
				dfs(grid,vis,i,j);
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}