#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i : nums){
            if(s.count(i)){
                return true;
            }
            s.insert(i);
        }
        return false;
    }
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i<<": ";
        cin>>nums[i];
    }
    cout<<(containsDuplicate(nums) ? "Duplicate present" : "No duplicate");
    return 0;
}