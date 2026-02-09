#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        if(t.length()!=s.length()){
            return false;
        }
        map<char,int> st;
        map<char,int> tt;
        for(auto ch : s){
            st[ch]++;
        }
        for(auto ch : t){
            tt[ch]++;
        }
        return tt==st;
    }
int main(){
    string s;
    cout<<"Enter first string : ";
    cin>>s;
    string t;
    cout<<"Enter second string : ";
    cin>>t;
    cout<<(isAnagram(s,t)?"Anagram":"Not Anagram");
    return 0;
}