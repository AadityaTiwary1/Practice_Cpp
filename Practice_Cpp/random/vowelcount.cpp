#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    set<char> st={'a','e','i','o','u','A','E','I','O','U'};
    int c=0;
    for(int i=0;i<s.size();i++){
        if(st.count(s[i])){
            c++;
        }
    }
    cout<<"Count of vowels : "<<c;
    return 0;
}