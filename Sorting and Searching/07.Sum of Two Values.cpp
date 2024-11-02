#include<bits/stdc++.h>
using namespace std;
 
int main(){
    unordered_map<int,int> m;
    int n,x;
    cin>>n>>x;
    vector<int> nums;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        nums.push_back(k);
    }

    bool flag = true;
    for(int i=0;i<n;i++){
        if(x-nums[i]<0) continue;
        if(m.find(x-nums[i])!=m.end()){
            cout << m[x-nums[i]] << " " << i+1;
            flag=false;
            break;
        }
        m[nums[i]]=i+1;
    }
    if(flag) cout << "IMPOSSIBLE";
    return 0;
}