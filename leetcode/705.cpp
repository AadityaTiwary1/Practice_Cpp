#include <bits/stdc++.h>
using namespace std;
set<int> hs;
void add(int key) {
    hs.insert(key);
}
void removeKey(int key) {
    hs.erase(key);
}
bool contains(int key) {
    return hs.count(key);
}
int main(){
    int choice, key;
    while(true){
        cout<<"\n1. Add\n2. Remove\n3. Contains\n4. Exit\nEnter choice: ";
        cin>>choice;
        if(choice == 4) break;
        cout<<"Enter key: ";
        cin>>key;
        if(choice == 1){
            add(key);
            cout<<"Added";
        }
        else if(choice == 2){
            removeKey(key);
            cout<<"Removed";
        }
        else if(choice == 3){
            if(contains(key))
                cout<<"Present in HashSet";
            else
                cout<<"Not present";
        }
    }
    return 0;
}
