#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> mpp;
void put(int key, int value) {
    mpp[key] = value;
}
int get(int key) {
    if(!mpp.count(key)) return -1;
    return mpp[key];
}
void removeKey(int key) {
    mpp.erase(key);
}
int main(){
    int choice, key, value;
    while(true){
        cout<<"\n1. Put\n2. Get\n3. Remove\n4. Exit\nEnter choice: ";
        cin>>choice;
        if(choice == 4) break;
        if(choice == 1){
            cout<<"Enter key and value: ";
            cin>>key>>value;
            put(key,value);
            cout<<"Inserted";
        }
        else if(choice == 2){
            cout<<"Enter key: ";
            cin>>key;
            int res = get(key);
            if(res == -1)
                cout<<"Key not found";
            else
                cout<<"Value: "<<res;
        }
        else if(choice == 3){
            cout<<"Enter key: ";
            cin>>key;
            removeKey(key);
            cout<<"Removed";
        }
    }
    return 0;
}
