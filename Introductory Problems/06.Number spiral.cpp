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

	int t;
	cin>>t;
	while(t--){
		ll r,c;
		cin>>r>>c;
		r--,c--;
		ll maxi = max(r,c);
		ll first_number = maxi*maxi+1;
		ll dist;
		if(maxi%2==0){
			dist = abs(maxi-r)+c;
		}
		else dist = r + abs(maxi-c);
		cout << first_number+dist << endl;
	}
	return 0;
}