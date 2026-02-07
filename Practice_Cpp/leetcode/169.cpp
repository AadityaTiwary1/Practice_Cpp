#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    map<int,int> mpp;
    for(int i : nums){
        mpp[i]++;
    }   
    int m = nums.size();
    for(auto j : mpp){
        if(j.second > m/2){
            return j.first;
        }
    }
    return -1;
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter elements (-1 to stop): ";
    while(cin >> x && x != -1){
        nums.push_back(x);
    }
    int result=majorityElement(nums);
    if(result!=-1){
        cout<<"Majority element: "<<result;
    }else{
        cout<<"No majority element found";
    }
    return 0;
}
