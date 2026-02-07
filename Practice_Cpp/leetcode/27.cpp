#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter elements (-1 to stop): ";
    while(cin >> x && x != -1){
        nums.push_back(x);
    }
    int val;
    cout<<"Enter value to remove: ";
    cin>>val;
    int newLength = removeElement(nums, val);
    cout<<"New length: "<<newLength<<endl;
    cout<<"Array after removal: ";
    for(int i=0;i<newLength;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
