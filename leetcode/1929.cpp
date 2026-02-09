#include <bits/stdc++.h>
using namespace std;
vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int i : nums){
            ans.push_back(i);
        }
        for(int i : nums){
            ans.push_back(i);
        }
        return ans;
    }
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter elements (-1 to stop): ";
    while(cin >> x && x != -1){
        nums.push_back(x);
    }
    vector<int> res=getConcatenation(nums);
    cout<<"Concatenated array : ";
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}