#include <bits/stdc++.h>
using namespace std;
string getHint(string secret, string guess)
{
    int n = secret.size(), m = guess.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[secret[i]]++;
    }
    int bulls = 0, cows = 0;
    for (int i = 0; i < n; i++)
    {
        if (secret[i] == guess[i])
        {
            bulls++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.find(guess[i]) != mp.end())
        {
            cows++;
            mp[guess[i]]--;
            if (mp[guess[i]] == 0)
                mp.erase(guess[i]);
        }
        cows = cows - bulls;
        string ans = to_string(bulls) + "A" + to_string(cows) + "B";
        return ans;
    }
    int main() {}