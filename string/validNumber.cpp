#include <bits/stdc++.h>
using namespace std;
bool validNumber(string s)
{
    int n = s.length();
    bool isNum = false, isDot = false, isE = false;
    int countPlusMinus = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            isNum = true;
        }
        else if (s[i] == '+' or s[i] == '-')
        {
            if (countPlusMinus == 2)
            {
                return false;
            }
            if (i != 0 and s[i - 1] != 'e' and s[i - 1] != 'E')
            {
                return false;
            }
            countPlusMinus++;
        }
        else if (s[i] == '.')
        {
            if (isDot or isE)
            {
                return false;
            }
            isDot = true;
        }
        else if (s[i] == 'e' or s[i] == 'E')
        {
            if (isE or !isNum)
            {
                return false;
            }
            isE = true;
            isNum = false;
        }
        else
        {
            return false;
        }
    }
    return isNum;
}
int main() {}