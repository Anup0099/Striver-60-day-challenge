#include <bits/stdc++.h>
using namespace std;
// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// Pincludacstdio

// 2 includerstring.

// 3 // Faad only region start

// 4

// 5 int Test(Sine

// 20

// 1

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once

// Example 1:

// Input: strs = ["eat","tea", "tan", "ate", "nat", "bat"]

// Output: [[[bat"],["nat", "tan"], ["ate", "eat", "tea"]]

// Example 2

// Input: strs = []

// Output: [[]]

// Example 3:

// Input strs = ['a]

// Output: [[]]
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(), s.end());
        mp[s].push_back(strs[i]);
    }
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
int main() {
    
}