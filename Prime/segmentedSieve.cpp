#include <bits/stdc++.h>
using namespace std;

vector<int> seiveOfErastothene(int n , vector<bool> &primes)
{
    // vector<bool> primes(n + 1, true);
    vector<int> arr1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (primes[i] == true)
        {
            for (int j = 2 * i; j*j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for (int i = 2; i * i<=n; i++)
    {
        if (primes[i] == true)
            arr1.push_back(i);
    }

    return arr1;
}

int main()
{
    int l,r;
    cin>>l>>r;
    vector<bool> isPrimes(r, true);
    vector<int> arr = seiveOfErastothene(r,isPrimes);

   vector<bool> primeInRange(r-l+1,true);
    for(int i : arr){
        for(int j = l/i;j*i<r+1;j++){
            if(j == 1) continue;
            primeInRange[j*i-l]=false;
        }
    }
    for(int i = 0 ; i < r-l+1;i++){
        if(i+l==1) continue;
        if(primeInRange[i]==true) cout<<i+l<<" ";
    }
}