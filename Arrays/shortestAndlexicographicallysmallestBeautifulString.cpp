#include <bits/stdc++.h>
using namespace std;
// you are given a binary String s and positive integer k. A substring s is beautiful if the number of 1s in it is exactly k. let len be the length of the shortest beautiful substring . return the lexicographically smallest beautiful substring of string s with length equal to len. if there is no such substring return an empty string
// example 100011001 k=3 output=11001

string shortestBeautifulString(string s, int k)
{
    int n = s.length();
    int i = 0, j = 0;
    string ans = "";
    int count = 0;
    while (j < n)
    {
        if (s[j] == '1')
        {
            count++;
        }
        j++;
        while (count > k || s[i] == '0')
        {
            if (s[i] == '1')
            {
                count--;
            }
            i++;
        }
        if (count == k)
        {
            if (ans == "")
            {
                ans = s.substr(i, (j - i));
            }
            else
            {
                if (ans.size() > (j - i))
                {
                    ans = s.substr(i, (j - i));
                }
                else
                {
                    if (ans.size() == j - i)
                    {
                        string s1 = s.substr(i, (j - i));
                        if (s1 < ans)
                        {
                            ans = s1;
                        }
                    }
                }
            }
        }
    }
    return ans;
}
int main()
{
    string s = "100011001";
    int k = 3;

    cout << shortestBeautifulString(s, k);
}