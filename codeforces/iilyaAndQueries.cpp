#include <bits/stdc++.h>
using namespace std;
// Ilya the Lion wants to help all his friends with passing exams. They need to solve the following problem to pass the IT exam.

// You've got string s = s1s2... sn (n is the length of the string), consisting only of characters "." and "#" and m queries. Each query is described by a pair of integers li, ri (1 ≤ li < ri ≤ n). The answer to the query li, ri is the number of such integers i (li ≤ i < ri), that si = si + 1.

// Ilya the Lion wants to help his friends but is there anyone to help him? Help Ilya, solve the problem.
int main()
{

    string s;
    cin >> s;
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        vector<int> dp(s.length(), 0);

        for (int i = l - 1; i < r - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            dp[i] = count;
        }
        cout<<dp[s.length()-1]<<endl;
    }
}