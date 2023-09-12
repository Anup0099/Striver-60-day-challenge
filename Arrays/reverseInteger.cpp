#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    string s = to_string(x);
    int n = s.length();
    string ans = "";

    for (int i = n - 1; i >= 0; i--)
    {
        ans += s[i];
    }
    if (x < 0)
    {
        ans = "-" + ans;
    }
    return stoi(ans);
    // time complexity: O(n) because of the for loop and the stoi function  // stoi() function takes a string as an argument and returns its value.
    // space complexity: O(n)
}
int reverse2(int x)
{
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = -123;
    cout << reverse2(n);
}