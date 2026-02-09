#include <bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int>& nums) {
    priority_queue<int> maxheap;
    for(int i : nums){
        maxheap.push(i);
    }
    vector<int> res(nums.size());
    for(int i = nums.size()-1; i >= 0; i--){
        res[i] = maxheap.top();
        maxheap.pop();
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
    vector<int> sorted = sortArray(nums);
    cout<<"Sorted array: ";
    for(int i : sorted){
        cout<<i<<" ";
    }
    return 0;
}
