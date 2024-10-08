#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int log_10 = log10(n);
    if(n == pow(10,log_10)) cout<<"true";
    else cout<<"false";
}