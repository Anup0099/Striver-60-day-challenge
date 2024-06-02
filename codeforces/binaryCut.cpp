/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size(); 
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0' and s[i - 1] == '1')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    
}