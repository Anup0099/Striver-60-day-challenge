#include <bits/stdc++.h>
using namespace std;
// Given three strings a, b, and c, your task is to find a string that has the minimum length and contains all three strings as substrings.
// If there are multiple such strings, return the lexicographically smallest one.

// Return a string denoting the answer to the problem.

// Notes

// A string a is lexicographically smaller than a string b (of the same length) if in the first position where a and b differ, string a has a letter that appears earlier in the alphabet than the corresponding letter in b.
// A substring is a contiguous sequence of characters within a string.
// Input: a = "abc", b = "bca", c = "aaa"
// Output: "aaabca"
// Explanation:  We show that "aaabca" contains all the given strings: a = ans[2...4], b = ans[3..5], c = ans[0..2]. It can be shown that the length of the resulting string would be at least 6 and "aaabca" is the lexicographically smallest one
string checkCommonPart(string a, string b)
{
    int n = a.length(), m = b.length();
    if (a.find((b)) != string::npos)
        return a;
    for (int i = min(n, m); i >= 0; i--)
    {
        if (a.substr(n - i, i) == b.substr(0, i))
        {
            return a.substr(0, n - i) + b;
        }
    }
    return a + b;
}
void isValid(string merged, string &result)
{
    if (result.length() == 0)
    {
        result = merged;
    }
    else if (merged.length() < result.length())
    {
        result = merged;
    }
    else if (merged.length() == result.length() && merged < result)
    {
        result = merged;
    }
}
string minimumString(string a, string b, string c)
{
    vector<string> arr = {a, b, c};
    int n = arr.size();
    string result="";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j && j!=k && i!=k)
                {
                    string merged = checkCommonPart(arr[i],arr[j]);
                    merged = checkCommonPart(merged,arr[k]);
                    isValid(merged,result);
                }
            }
        }
    }
    return result;

}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    string result = minimumString(a, b, c);
    cout << result << endl;

    return 0;
}
