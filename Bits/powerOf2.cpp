#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count;
    while(n!=0){
        n = n & n-1;
        count++;
    }
    if(count == 1) cout<<"true";
    else cout<<"false";
}