#include <bits/stdc++.h>
using namespace std;
int minimumDeletions(string word, int k)
{
    int n = word.size();
    vector<int> freq(26, 0);
    for (int i = 0; i < n; i++)
    {
        freq[word[i] - 'a']++;
    }
    sort(freq.begin(), freq.end(), greater<int>());
    int deletions = 0;
    for (int i = 0; i < 25; i++)
    {
        if (freq[i] == 0)
        {
            break;
        }
        while (freq[i] > 0 && freq[i] - freq[i + 1] > k)
        {
            freq[i]--;
            deletions++;
        }
    }
    return deletions;
}
int main()
{
}