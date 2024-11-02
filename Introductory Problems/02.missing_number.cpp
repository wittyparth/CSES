#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,x,res=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>x;
        res = res^x;
        res = res^(i+1);
    }
    res = res^n;
    cout << res;
    return 0;
}