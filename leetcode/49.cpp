#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(string s : strs){
            string sorted=s;
            sort(sorted.begin(),sorted.end());
            res[sorted].push_back(s);
        }
        vector<vector<string>> result;
        for(auto b : res){
            result.push_back(b.second);
        }
        return result;
    }
int main(){
    vector<string> strs;
    string s;
    cout<<"Enter words (type 'stop' to end): ";
    while(cin >> s && s != "stop"){
        strs.push_back(s);
    }
    vector<vector<string>> ans = groupAnagrams(strs);
    cout<<"\nGrouped Anagrams:\n";
    for(auto group : ans){
        for(string word : group){
            cout<<word<<" ";
        }
        cout<<endl;
    }
    return 0;
}