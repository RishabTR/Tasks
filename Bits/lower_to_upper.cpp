#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    cout<<ch<<" ";
    if((ch & (1<<5))){
        ch = ch & ~(1<<5);
    }
    cout<<ch;
}