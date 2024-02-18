#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // First calculate the frequency of max element
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++; // s[i] - 'a' will give the index of the character in the freq array
        }
        int maxFreq = *max_element(begin(freq), end(freq));
        if (maxFreq > n / 2)
        {
            cout << (n - (n - maxFreq) * 2) << endl;
        }
        else
        {
            cout << n % 2 << endl;
        }
    }
}