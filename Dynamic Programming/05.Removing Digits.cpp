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
const int size = 1e6+7;
vector<int> t(size,-1);

int sol(int n){
	//base case
	if(n<0) return 1e6;
	if(n==0) return 0;
	if(t[n]!=-1) return t[n];
	int x = n;
	int mini = INT_MAX;
	while(x){
		if(x%10) mini = min(mini,1+sol(n-x%10));
		x/=10;
	}
	return t[n] = mini;
}

int main()
{

	int n;
	cin>>n;
	cout << sol(n);
	return 0;
}