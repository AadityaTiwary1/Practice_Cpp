#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> pref(n);
    vector<int> suff(n);
    vector<int> res(n);
    pref[0] = 1;
    suff[n-1] = 1;
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1] * nums[i-1];
    }
    for(int i=n-2;i>=0;i--){
        suff[i] = suff[i+1] * nums[i+1];
    }
    for(int i=0;i<n;i++){
        res[i] = pref[i] * suff[i];
    }
    return res;
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter elements (-1 to stop): ";
    while(cin >> x && x != -1){
        nums.push_back(x);
    }
    vector<int> ans = productExceptSelf(nums);
    cout<<"Result: ";
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}
