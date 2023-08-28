#include <bits/stdc++.h>
using namespace std;
string breakthepalindrome(string palindrome)
{
    int n = palindrome.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (palindrome[i] != 'a')
        {
            palindrome[i] = 'a';
            return palindrome;
        }
    }
    palindrome[n - 1] = 'b';
    return palindrome;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}