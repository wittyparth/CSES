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
	int ans=0;
	for(int i=5;n/i>=1;i*=5){
		ans+=n/i;
	}
	cout << ans;
	// for(int i=1;i<=n;i++){
		// int cnt=0,num=i;
		// while(num%5==0){
			// cnt++;
			// num/=5;
		// }
		// ans+=cnt;
	// }
	// cout << ans;
	return 0;
}