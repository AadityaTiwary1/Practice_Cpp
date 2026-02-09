#include <bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int> mpp;
    for(int i : nums){
        mpp[i]++;
    }
    vector<pair<int,int>> p;
    for(auto it : mpp){
        p.push_back({it.second,it.first});
    }
    sort(p.rbegin(),p.rend());
    vector<int> res;
    for(int i=0;i<k;i++){
        res.push_back(p[i].second);
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
    int k;
    cout<<"Enter k: ";
    cin>>k;
    vector<int> ans = topKFrequent(nums, k);
    cout<<"Top "<<k<<" frequent elements: ";
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}