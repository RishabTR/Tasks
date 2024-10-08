#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    cout<<x<<" "<<y<<endl;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout<<x<<" "<<y;
}