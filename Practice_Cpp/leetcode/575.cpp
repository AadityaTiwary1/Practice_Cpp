#include <bits/stdc++.h>
using namespace std;
int distributeCandies(vector<int>& candyType) {
        set<int> st;
        for(int i : candyType){
            st.insert(i);
        }
        return min((int)st.size(),(int)candyType.size()/2);
    }
int main(){
    vector<int> candyType;
    int x;
    cout<<"Enter candy types (-1 to stop): ";
    while(cin >> x && x != -1){
        candyType.push_back(x);
    }
    int ans = distributeCandies(candyType);
    cout<<"Maximum different candies sister can get: "<<ans;
    return 0;
}
