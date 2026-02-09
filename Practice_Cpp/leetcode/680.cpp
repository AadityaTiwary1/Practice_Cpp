#include <bits/stdc++.h>
using namespace std;
bool ispali(string& s,int l,int r){
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;r--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int l=0;int r=s.size()-1;
        while(l<=r){
            if(s[l]!=s[r]){
                return ispali(s,l+1,r) || ispali(s,l,r-1);
            }
            l++;r--;
        }
        return true;
    }
int main(){
    string s;
    cout<<"Enter a string: ";
    cin >> s;
    if(validPalindrome(s)){
        cout<<"Yes, valid palindrome after at most one deletion";
    } else {
        cout<<"No, not possible";
    }
    return 0;
}