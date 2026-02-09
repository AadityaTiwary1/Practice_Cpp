#include <bits/stdc++.h>
using namespace std;
    bool isPalindrome(string s) {
        int i=0;int j=s.size()-1;//divide the string into 2 halves
        while(i<j){
            while(i<j && !isalnum(s[i])){//moving to alphanumeric character from left
                i++;
            }
            while(i<j && !isalnum(s[j])){//moving to alphanumeric character from righ
                j--;
            }
            while(tolower(s[i])!=tolower(s[j])){//comparing both sides
                return false;}
            i++;j--;
        }
        return true;//if matched then return true
    }
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if(isPalindrome(s)){
        cout<<"Valid Palindrome";
    } else {
        cout<<"Not a Palindrome";
    }
    return 0;
}
