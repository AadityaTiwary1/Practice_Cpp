#include <bits/stdc++.h>
using namespace std;
int minLengthAfterRemovals(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=(n+1)/2;
        int remove=0;
        while(l<r && r<n)
        {
            if(nums[r]>nums[l]){
                remove+=2;
            }
            l++;r++;
        }
        return n-remove;
    }
    int main(){
    vector<int> nums;
    int x;
    cout<<"Enter elements (-1 to stop): ";
    while(cin >> x && x != -1){
        nums.push_back(x);
    }
    int ans = minLengthAfterRemovals(nums);
    cout<<"Minimum length after removals: "<<ans;
    return 0;
}