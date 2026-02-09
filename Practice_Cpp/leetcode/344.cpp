#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
    int l=0;int r=s.size()-1;
    while(l<=r){
        swap(s[l++],s[r--]);
    }
}
int main(){
    string input;
    cout<<"Enter a string: ";
    cin>>input;
    vector<char> s(input.begin(), input.end());
    reverseString(s);
    cout<<"Reversed string: ";
    for(char c : s){
        cout<<c;
    }
    return 0;
}