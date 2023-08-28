#include <bits/stdc++.h>
using namespace std;
int bagOfTokens(vector<int> Tokens, int power)
{
    int n = Tokens.size();
    int score = 0;
    int maxScore = 0;
    sort(Tokens.begin(), Tokens.end());
    int i = 0, j = n - 1;
    while (i >= j)
    {
        if (power > Tokens[i])
        {
            power -= Tokens[i];
            score++;
            maxScore = max(maxScore, score);
            i++;
        }
        else if (score)
        {
            score--;
            power += Tokens[i];
            j--;
        }
        else
        {
            return maxScore;
        }
    }
    return maxScore;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}