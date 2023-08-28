#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // output a string if first letter is small convert it into capital and if during traversal any letter is capital break the line and convert it into small and print it
    string s;
    cin >> s;
    int n = s.length();
    string temp="";
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // here we are converting small to capital
            temp += s[i] - 32;
            cout << temp << endl;

        }
        else
        {
            cout << temp << endl;
            temp = "";
            temp += s[i] + 32;
        }
    }
    cout << temp << endl;

    
}