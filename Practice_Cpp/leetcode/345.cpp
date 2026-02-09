#include <bits/stdc++.h>
using namespace std;
string reverseVowels(string s) {
        int l=0;int r=s.size()-1;
        set<char> st={'a','e','i','o','u','A','E','I','O','U'};
        while(l<r){
            if(!st.count(s[l])){
                l++;
            }else if(!st.count(s[r])){
                r--;
            }else{
                swap(s[l],s[r]);
                l++;r--;
            }
        }
        return s;
    }
    int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    string result = reverseVowels(s);
    cout<<"After reversing vowels: "<<result;
    return 0;
}

