#include <bits/stdc++.h>
using namespace std;
int maxCountOfA(string s)
{
    int n = s.length();
    int i = 0, j = 0;

    int maxCount = 0;
    int count = 0;
    while (j < n)
    {
        if (s[j] == 'a')
        {
            count++;
            j++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 0;
            j++;
                }
        if (j == n)
        {
            maxCount = max(maxCount, count);
        }
    }
    return maxCount;
}
int main()
{
    string s = "aaabbbaaaaaaaaaaaaaaa";
    cout << maxCountOfA(s);
}