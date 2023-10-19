#include <bits/stdc++.h>
using namespace std;
// You are given a string S that consists only of Os and 1s.



// Task



// Determine the number of substrings that have more 1s than Os.



// Note: A substring of a string is a sequence obtained by removing zero or more characters from either/both the front and back of the string. The substrings of string "101" are ["101", "10": "1", "0", "01", "1"] 11 cannot be called the substring of "101" because it cannot be obtained by removing characters from the front or back of "101".



// Example



// Assumption



// S="0111"



// Approach



// The substrings of "0111" that have more 1s than Os are ["011","0111", "T



// "11", "111", "1", "11", "1"].



// Therefore, the answer is 8 substrings.



// Function description



// Complete the solve function provided in the editor. This function



// Input Format:-



// • First line contains an integer T, denoting number of test cases.



// For each test case:



// First line contains an integer N.



// 2



// • Second line contains an integer K.



// Next line contain a string S.



// Output Format :-



// For each test case, print the required answer in a new line.



// Constraints :-



// 1≤T≤10



// 1 ≤ N ≤ 105



// 14K≤N



// S contains only latin lowercase alphabets

long long solve(string s)
{
    long long ans = 0;
    long long cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        else
        {
            ans += cnt * (cnt + 1) / 2;
            cnt = 0;
        }
    }
    ans += cnt * (cnt + 1) / 2;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        cout << solve(s) << endl;
    }
}