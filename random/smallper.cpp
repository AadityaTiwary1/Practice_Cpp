#include <bits/stdc++.h>
using namespace std;
int smallper(int n){
    if(n==0){
        return 0;
    }
    vector<int> digit;
    while(n>0){
        digit.push_back(n%10);
        n=n/10;
    }
    sort(digit.begin(),digit.end());
    //if first digit is zero
    if(digit[0]==0){
        for(int i=1;i<digit.size();i++){
            if(digit[i]!=0){
                swap(digit[i],digit[0]);
                break;
            }
        }
    }
    int number=0;
    for(int i=0;i<digit.size();i++){
        number=number*10+digit[i];
    }
    return number;
}
int main() {
    int n=0;
    cout<<"Enter a number: ";
    cin>>n;
    int res=smallper(n);
    cout<<"Smallest permuatation: ";
    cout<<res;
    return 0;
}