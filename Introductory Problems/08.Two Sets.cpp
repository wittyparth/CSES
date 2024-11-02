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

	ll n;
	cin>>n;
	if(n*(n+1)/2%2==0){
			cout << "YES" << endl;
			ll l=1,r=n;
			ll sum= n*(n+1)/4;
			ll b = l+r;
			if(n%2==1) cout << 2*(sum/b)+1 << endl;
			else cout << 2*sum/b << endl;
			for(int i=0;i<sum/(b);i++){
				cout << l << " " << r << " ";
				l++,r--;
			}
			if(n%2==1)cout << sum%b << endl;
			else cout << endl;
			if(n%2==1) cout << r-l << endl;
			else cout << n-(2*sum/b) << endl;
			for(int i=l;i<=r;i++){
				if(i!=sum%b) cout << i << " ";
			}
		
	}
	else cout << "NO";
	return 0;
}