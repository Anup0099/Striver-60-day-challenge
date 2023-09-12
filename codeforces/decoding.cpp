#include <bits/stdc++.h>
using namespace std;
// Polycarp is mad about coding, that is why he writes Sveta encoded messages. He calls the median letter in a word the letter which is in the middle of the word. If the word's length is even, the median letter is the left of the two middle letters. In the following examples, the median letter is highlighted: contest, info. If the word consists of single letter, then according to above definition this letter is the median letter.

// Polycarp encodes each word in the following way: he writes down the median letter of the word, then deletes it and repeats the process until there are no letters left. For example, he encodes the word volga as logva.

// You are given an encoding s of some word, your task is to decode it.
int main()
{
    // To find the answer we can iterate through the given string from the left to the right and add each letter in the answer string — one letter to the begin, next letter to the end, next letter to begin and so on. If n is even than the first letter must be added to the begin and the second letter to the end. In the other case, the first letter — to the end, second — to the begin. We need to make it until we do not add all letters from the given string.
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if ((n - i) % 2)
        {
            // odd

            ans += s[i];
            // cout << ans << endl;

        }
        else
        {
            // even
            ans = s[i] + ans;
        }
    }
    cout << ans << endl;
}