#include <bits/stdc++.h>
using namespace std;
int countBinarySubstring(string s)
{
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string str = s.substr(i, j - i + 1);
            int count0 = 0, count1 = 0;
            bool flag = false;
            int k;
            for (k = 0; k < str.length(); k++)
            {
                if (str[k] == '0')
                {
                    if (flag)
                    {
                        break;
                    }
                    count0++;
                }
                else
                {
                    flag = true;
                    count1++;
                }
            }
            // all the string of 0's and 1's should be grouped together
            if (count0 == count1 and k == str.length())
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    string s = "00110011";
    cout << countBinarySubstring(s) << endl;
    return 0;
}