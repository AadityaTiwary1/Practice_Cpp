#include <bits/stdc++.h>
using namespace std;
vector<int> ev(vector<int>& nums){
    vector<int> even;
    for(int i : nums){
        if(i%2==0){
            even.push_back(i);
        }
    }
    return even;
}
vector<int> od(vector<int>& nums){
    vector<int> odd;
    for(int i : nums){
        if(i%2!=0){
            odd.push_back(i);
        }
    }
    return odd;
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter elements (-1 to stop) : ";
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    vector<int> even=ev(nums);
    vector<int> odd=od(nums);
    cout<<"Even numbers : ";
    for(int i : even){
        cout<<i<<" ";
    }
    cout<<"\nOdd numbers : ";
    for(int i : odd){
        cout<<i<<" ";
    }
    return 0;
}