#include <bits/stdc++.h>
using namespace std;
// given a string  s and an integer k reverse the first k characters for every 2k characers counting from the satrt of the string.if there are fewer than k charcters left reverse all of item  if there are fewer than 2k but greater than or
string reverseStr(string s)
{
    int n = s.length();
    string ans = "";
    // reverse string word wise
    // Welcome to Coding Ninjas
    // output: Ninjas Coding to Welcome
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            ans += s.substr(i + 1, n - i - 1);
            ans += " ";
            n = i;// this is done to reduce the length of the string so that we can get the next word in the string
        }
    }
    ans += s.substr(0, n);// this is done to get the first word in the string
    return ans;
}
int main()
{
    string s = "i love programming very much";
    cout << reverseStr(s);
}