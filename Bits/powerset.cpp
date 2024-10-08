#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i =0 ; i < t ; i++){
        cin>>arr[i];
    }

    int n = 1<<t;
    vector<vector<int>> result;
    for(int i = 0 ; i < n ; i++){
        vector<int> subset;
        for(int j = 0 ; j < t;j++){
            if( i & (1<<j)){
                subset.push_back(arr[j]);
            }
        }
        result.push_back(subset);
    }
    for(auto i:result){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}