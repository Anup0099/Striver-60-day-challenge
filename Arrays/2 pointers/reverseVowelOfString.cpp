#include <bits/stdc++.h>
using namespace std;
bool isVowel(char s)
    {
        bool flag = false;
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I'  || s == 'O' || s == 'U')
        {
            flag = true;
        }
        return flag;
    }
string vowels(string s)
{
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (isVowel(s[i]) && isVowel(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (isVowel(s[i]))
        {
            j--;
        }
        else if (isVowel(s[j]))
        {
            i++;
        }
    }
    return s;
}
int main()
{
    // 2 pointer question is
}