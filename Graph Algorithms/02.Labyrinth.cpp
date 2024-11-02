// Problem: Labyrinth
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1193
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

pair<int,int> src,dest;
vector<pair<pair<int,int>,char>> dir = {{{0,1},'R'},{{1,0},'D'},{{-1,0},'U'},{{0,-1},'L'}};
 
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> grid(n,vector<int>(m)); 
	vector<vector<char>> par(n,vector<char>(m,'X')); 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char ch;
			cin>>ch;
			if(ch=='.' || ch=='A' || ch=='B') grid[i][j]=1;
			else grid[i][j]=0;
			if(ch=='A') src.first=i,src.second=j;
			if(ch=='B') dest.first=i,dest.second=j;
		}
	}
	queue<pair<int,int>> q;
	grid[src.first][src.second]=0;
	bool flag = true;
	par[src.first][src.second]='A';
	q.push(src);
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(auto it:dir){
			int i = x+it.first.first;
			int j = y+it.first.second;
			if((i>=0 && i<n) && (j>=0 && j<m) && grid[i][j]){
				par[i][j] = it.second;
				grid[i][j]=0;
				if(i==dest.first && j==dest.second){
					flag=false;
					break;
				}
				q.push({i,j});
			}
		}
	}
	// for(int i=0;i<n;i++){
		// for(int j=0;j<m;j++) cout << par[i][j] << " ";
		// cout << endl;
	// }
	// cout << endl;
	if(flag) cout << "NO";
	else{
		int i=dest.first,j=dest.second;
		string ans="";
		while((i>=0 && i<n) && (j>=0 && j<m) && par[i][j]!='A'){
			ans+=par[i][j];
			char ch = par[i][j];
			// cout << ch << " "<< i << " " << j << endl;
			if(ch=='L') j++;
			else if(ch=='R') j--;
			else if(ch=='U') i++;
			else i--;
		}
		reverse(ans.begin(),ans.end());
		cout << "YES" << endl;
		cout << ans.length() << endl;
		cout << ans;
	}
	return 0;
}