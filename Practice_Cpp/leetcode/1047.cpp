#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(!stk.empty() && stk.top()==s[i]){
                stk.pop();
            }else{
                stk.push(s[i]);
            }
        }
        string res="";
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
    int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    string result = removeDuplicates(s);
    cout<<"After removing duplicates: "<<result;

    return 0;
}
