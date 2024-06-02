#include <bits/stdc++.h>
using namespace std;
bool solve(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();
    bool flag1 = true, flag2 = true;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            flag1 = false;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (str1[i] != str2[m-1])
        {
            flag2 = false;
            break;
        }
        m--;
    }
    if (flag1 == true and flag2 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int countPrefixSuffixPairs(vector<string> &words)
{
    int n = words.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (solve(words[i], words[j])==true or solve(words[j], words[i])==true  )
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    // words = ["a","aba","ababa","aa"]
    //["pa","papa","ma","mama"]

    vector<string> words = {"pa", "papa", "ma", "mama"};
    cout << countPrefixSuffixPairs(words) << endl;
}