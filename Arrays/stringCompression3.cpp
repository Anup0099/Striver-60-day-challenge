/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
string compressedString(string word)
{
    int n = word.size();
    string ans = "";
    int i = 0;
    while (i < n)
    {
        int j = i;
        while (j < n && word[i] == word[j] and j < i+9)
        {
            j++;
        }
        ans += char('0' + j - i);
        ans += word[i];
        i = j - 1;
        i++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string word;
    cin >> word;
    cout << compressedString(word) << endl;
}