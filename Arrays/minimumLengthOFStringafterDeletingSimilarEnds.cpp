#include <bits/stdc++.h>
using namespace std;
int minimumLength(string s)
{
    int n = s.length();
    int i = 0, j = n - 1;
    int count = 0;
    while (i < j)
    {

        // int countp = 0, counts = 0;
        if (s[i] == s[j])
        {
            char removedChar = s[i];
            while (i <= j and s[i] == removedChar)
            {
                count++;
                i++;
            }
            while (j >= i and s[j] == removedChar)
            {
                count++;
                j--;
            }
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return n - count;
}
int main()
{
    string s = "cabaabac";
    int x = 5;
    int *p = &x;
    int y=*p;
    cout << p << " " << *p << endl;
    cout<<y;
}