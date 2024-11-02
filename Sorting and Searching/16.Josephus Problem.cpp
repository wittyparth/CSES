// Problem: Josephus Problem I
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/2162
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
	queue<int> q;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	while(q.size()>1){
		int x = q.front();
		q.pop();
		cout << q.front() << " ";
		q.pop();
		q.push(x);
	}
	cout << q.front();
	return 0;
}