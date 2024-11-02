// Problem: Apple Division
// Contest: CSES - CSES Problem Set
// URL: https://www.cses.fi/problemset/task/1623
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

ll sol(vector<int> &nums,int i,ll l,ll r){
	//base case
	if(i<0) return abs(l-r);
	return min(sol(nums,i-1,l+nums[i],r),sol(nums,i-1,l,r+nums[i]));
}
int main()
{

	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	cout << sol(nums,n-1,0,0);
	return 0;
}