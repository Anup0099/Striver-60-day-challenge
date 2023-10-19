#include <bits/stdc++.h>
using namespace std;

int wordLadder(string startWord, string targetWord, vector<string> &wordList)
{
    int n = wordList.size();
    unordered_set<string> s(wordList.begin(), wordList.end()); // because of the find function we are using set because it has O(1) time complexity
    queue<pair<string, int>> q;                                // pair of string and int because we need to store the word and the level
    q.push({startWord, 1});
    while (!q.empty())
    {
        string first = q.front().first;
        int second = q.front().second;
        q.pop();
        if (first == targetWord)
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
    string statWord = "hit";
    string targetWord = "cog";
    vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
    cout << wordLadder(statWord, targetWord, wordList);
}