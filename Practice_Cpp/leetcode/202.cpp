#include <bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
        set<int> seen;
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            int sum=0;
            while(n>0){
                int digit=n%10;
                sum+=digit*digit;
                n/=10;
            }
            n=sum;
        }
        return n==1;
    }
int main(){
    int n;
    cout<<"ENter a number : ";
    cin>>n;
    if(isHappy(n)){
        cout<<"Happy number";
    }else{
        cout<<"It is not a happy number";
    }
    return 0;
}