#include <bits/stdc++.h>
using namespace std;
vector<int> substringWithConcateneatedOfAllwords(string s, vector<string> words)
{
    vector<int> ans;
    if (words.size() == 0 || s.size() == 0)
    {
        return ans;
    }
    unordered_map<string, int> map;
    for (int i = 0; i < words.size(); i++)
    {
        map[words[i]]++;
    }
    int eachWordLength = words[0].size();
    int totalWords = words.size();  
    for (int i = 0; i <= s.size() - eachWordLength * totalWords; i++)
    {
        unordered_map<string, int> seen;
        int j = 0;
        for (; j < totalWords; j++)
        {
            string word = s.substr(i + j * eachWordLength, eachWordLength);
            if (map.find(word) != map.end())
            {
                seen[word]++;
                if (seen[word] > map[word])
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if (j == totalWords)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main() {
    
}