#include <bits/stdc++.h>
using namespace std;
vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> freq;
        for(int i : arr1){
            freq[i]++;
        }
        vector<int> res;
        for(int i : arr2){
            while(freq[i]>0){
                res.push_back(i);
                freq[i]--;
            }
        }
        for(auto i : freq){
            while(i.second>0){
                res.push_back(i.first);
                i.second--;
            }
        }
        return res;
    }
int main(){
    vector<int> arr1, arr2;
    int x;
    cout<<"Enter arr1 (-1 to stop): ";
    while(cin >> x && x != -1){
        arr1.push_back(x);
    }
    cout<<"Enter arr2 (-1 to stop): ";
    while(cin >> x && x != -1){
        arr2.push_back(x);
    }
    vector<int> ans = relativeSortArray(arr1, arr2);
    cout<<"Relative sorted array: ";
    for(int i : ans){
        cout<<i<<" ";
    }

    return 0;
}