// Problem: Collecting Numbers
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/2216
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

	int n;
	cin>>n;
	map<int,int> m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		m[x]=i;
	}
	vector<int> vis(n+1,0);
	int rounds=0;
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		vis[i]=1;
		int s = m[i];
		for(int j=i+1;j<=n;j++){
			if(m[j]<s) break;
			vis[j]=1;
			s=m[j];
		}
		rounds++;
	}
	cout << rounds;
	return 0;
}