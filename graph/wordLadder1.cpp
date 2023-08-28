#include <bits/stdc++.h>
using namespace std;

int wordLadder(string startWord, string targetWord, vector<string> &wordList)
{
    int n = wordList.size();
    unordered_set<string> s(wordList.begin(), wordList.end());
    queue<pair<string, int>> q;
    q.push({startWord, 1});
    while (!q.empty())
    {
        string first = q.front().first;
        auto second = q.front().second;
        q.pop();
        if(first == targetWord)
        {
            return second;
        }
        for (int i = 0; i < first.length(); i++)
        {
            char originalChar = first[i];
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                first[i] = ch;
                if (s.find(first) != s.end())
                {
                    s.erase(first);
                    q.push({first, second + 1});
                }
            }
            first[i] = originalChar;
        }

    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}