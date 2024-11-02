#include<bits/stdc++.h>
using namespace std;
 
int main(){
    unordered_set<int> st;
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    // int pre=nums[0],cnt=1;
    int cnt=1;
    for(int i=1;i<n;i++){
        cnt+=(nums[i]!=nums[i-1]);
    }
    cout << cnt;
    return 0;
}