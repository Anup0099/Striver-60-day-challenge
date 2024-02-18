#include <bits/stdc++.h>
using namespace std;
// string reverseWOrds(string s)
// {
//     int n = s.length();
//     stack<string> st;
//     for (int i = 0; i < n; i++)
//     {
//         string word = "";
//         while (s[i] != ' ' and i < n)
//         {
//             word += s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     string ans = "";
//     while (!st.empty())
//     {
//         ans += st.top();
//         st.pop();
//         if (!st.empty())
//         {
//             ans += " ";
//         }
//     }
//     for (int i = ans.length() - 1; i > 0; i--)
//     {
//         if (ans[i] == ' ' and ans[i - 1] == ' ')
//         {
//             ans.erase(ans.begin() + i);
//         }
//     }
//     return ans;
//     // time complexity: O(n) because we are traversing the string once and while pushing the words in stack, we are traversing the string again to get the words and push them in stack. So, total time complexity is O(2n) which is O(n).
//     // using two pointer
//     int i = 0;
//     for (int j = 0; j < n; j++)
//     {
//         if (s[j] == ' ')
//         {
//             reverse(s.begin() + i, s.begin() + j);
//             i = j + 1;
//         }
//     }
//     reverse(s.begin() + i, s.end());
//     reverse(s.begin(), s.end());
//     return s;
// }
string reverseWords(string s)
{
    // int n = s.length();
    // int i = 0, r = 0, l = 0;
    // reverse(s.begin(), s.end());
    // while (i < n)
    // {
    //     while (i < n and s[i] != ' ')
    //     {
    //         s[r++] = s[i++];
    //     }
    //     if (l < r)
    //     {
    //         reverse(s.begin() + l, s.begin() + r);
    //         s[r] = ' ';
    //         l = r + 1;
    //     }
    //     i++;
    // }
    // return s.substr(0, r - 1);

    // string s = "  Gaurav  Rai  ayush    anup ";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);
            i--;
        }
        else
            break;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);
        }
        else
            break;
    }
    for (int i = 0; i < s.size(); i++)
    {
        while (s[i] == ' ' && s[i + 1] == ' ')
        {
            s.erase(i, 1);
        }
    }
    cout << s << endl;
    s += ' ';
    string ans = "", str = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            ans = str + " " + ans;
            str = "";
        }
        else
        {
            str += s[i];
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "the sky is     blue";
    cout << reverseWords(s);
}