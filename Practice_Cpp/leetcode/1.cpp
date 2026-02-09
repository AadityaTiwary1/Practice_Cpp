#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> a;
        for(int i=0;i<nums.size();i++){
            a.push_back({nums[i],i});
        }
        sort(a.begin(),a.end());
        int l=0;int r=a.size()-1;
        while(l<r){
            int cur=a[l].first+a[r].first;
            if(cur==target){
                return {min(a[l].second,a[r].second),max(a[l].second,a[r].second)};
            }else if(cur<target){
                l++;
            }else{
                r--;
            }
        }
        return {};
    }
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter elements (-1 to stop): ";
    while(cin >> x && x != -1){
        nums.push_back(x);
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    vector<int> result=twoSum(nums,target);
    if(result.size()==2){
        cout<<"Indices are: "<<result[0]<<" "<<result[1];
    }
    else{
        cout<<"No pair found";
    }
    return 0;
}