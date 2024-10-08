#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> primes(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == true)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for(int i = 2 ; i < n+1 ; i++){
        if(primes[i] == true) cout<<i<<" ";
    }
}