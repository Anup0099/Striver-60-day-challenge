/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;

bool isStrong(string s)
{
   string digits, letters;
    bool letterFound = false;
    for (char c : s) {
        if (isdigit(c)) {
            if (letterFound) return false; // A digit is found after a letter
            digits += c;
        } else {
            letterFound = true;
            letters += c;
        }
    }
    string sortedDigits = digits, sortedLetters = letters;
    sort(sortedDigits.begin(), sortedDigits.end());
    sort(sortedLetters.begin(), sortedLetters.end());
    return digits == sortedDigits && letters == sortedLetters;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << (isStrong(s) ? "YES" : "NO") << endl;
    }
}