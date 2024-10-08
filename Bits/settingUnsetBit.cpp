#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int bit;
    cout<<"Enter the bit at which the process should take place ";
    cin>>bit;
    cout<<n<<" ";
    n = n |  (1<<bit);

    cout<<n;
}