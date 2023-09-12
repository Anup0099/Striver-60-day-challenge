#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal)
{
    int n = s.length();
    string ans = s + s;
    if (ans.find(goal) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}
string reverseWords(string s)
{
    int n = s.length();
    // string ans = "";
    // reverse(s.begin(), s.end());
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] != ' ')
    //     {
    //         int j = i;
    //         while (j < n && s[j] != ' ')
    //         {
    //             j++;
    //         }
    //         string word = s.substr(i, j - i);
    //         reverse(word.begin(), word.end());
    //         ans += word;
    //         // ans += " ";
    //         i = j;
    //     }
    // }
    // string temp="";
    // for(int i=0;i<ans.length();i++)
    // {

    // }
}
string largestOddNumber(string num)
{
    int n = num.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if ((num[i] - '0') % 2 == 1)
        {
            return num.substr(0, i + 1);//substr(starting index, length)
        }
    }
    return "";
}
int main()
{
    string s = "the sky is blue";
    cout << reverseWords(s);
}