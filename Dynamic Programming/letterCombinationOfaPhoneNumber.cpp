/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void recursion(string s, string digits, map<char, string> mp)
{
    if (s.size() == digits.size())
    {
        ans.push_back(s);
        return;
    }
    int index = s.size();
    string newCharacter = mp[digits[index]];
    for (int i = 0; i < newCharacter.size(); i++)
    {
        string newChar = s + newCharacter[i];
        recursion(newChar, digits, mp);
    }
}
void recursion3(string &combination, string &digits, map<char, string> &mp, int index)
{
    if (index == digits.size())
    {
        ans.push_back(combination);
        return;
    }
    string letters = mp[digits[index]];
    for (char letter : letters)
    {
        combination.push_back(letter); // Add the letter to the combination
        recursion3(combination, digits, mp, index + 1);
        combination.pop_back(); // Remove the letter after the recursive call
    }
}
vector<string> letterCombinations(string digits)
{

    map<char, string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    if (digits.size() == 0)
    {
        return ans;
    }

    recursion("", digits, mp);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string digits = "23";
    vector<string> res = letterCombinations(digits);
    for (auto x : res)
    {
        cout << x << endl;
    }
}