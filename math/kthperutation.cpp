#include <bits/stdc++.h>
using namespace std;
string kthPermutation(int n, int k)
{
    string ans = "";
    vector<int> number;
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
        number.push_back(i);
    }
    k = k - 1;
    number.push_back(n);
    while (true)
    {
        ans += to_string(number[k / fact]);
        number.erase(number.begin() + k / fact);
        if (number.size() == 0)
        {
            break;
        }
        k = k % fact;
        fact = fact / number.size();
    }
    return ans;
}
int main() {}