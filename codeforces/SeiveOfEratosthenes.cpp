#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        if (prime[i])
        {
            res.push_back(i);
        }
    }
    return res;
}
vector<int> primeFactors(int n)
{
    vector<int> res;
    vector<int> prime(n + 1);
    iota(prime.begin(), prime.end(), 0);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }
    while(n!=1)
    {
        res.push_back(prime[n]);
        n = n/prime[n];
    }
    return res;
}
int main()
{
    int n = 10;
    vector<int> res = primeFactors(100);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}