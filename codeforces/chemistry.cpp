#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        string s;
        cin >> s;
        //         Let's remember under what conditions we can rearrange the letters of a word to form a palindrome. This can be done if the number of letters with odd occurrences is not greater than 1
        // .

        // In our problem, it is sufficient to check that the number of letters with odd occurrences (denoted as x
        // ) is not greater than k+1
        // . Let's prove this fact.

        // If x>k+1
        // , then it is definitely impossible to obtain the answer, because with k
        //  operations we cannot make the number of letters with odd occurrences not greater than 1
        // . On the other hand, we can simply remove the character with an odd number of occurrences on each removal iteration and decrease the number of odd occurrences. If there are no such characters, we can choose any character and remove it, thus having 1
        //  character with an odd occurrence.
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int odd = 0;
        for (auto it : mp)
        {
            if (it.second % 2 != 0)
            {
                odd++;
            }
        }
        if (odd > k + 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}