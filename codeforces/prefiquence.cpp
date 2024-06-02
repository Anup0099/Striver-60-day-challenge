/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void subsequence(string temp, string &b, int index)
{
    if (index == b.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(b[index]);
    subsequence(temp, b, index + 1);
    temp.pop_back();
    subsequence(temp, b, index + 1);
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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        long long count = 0;
        long long i = 0, j = 0;
        while (i < n and j < m)
        {
            if (a[i] == b[j])
            {
                count++;
                j++;
                i++;
            }
            else
            {
                while (a[i] != b[j] and j < m)
                {
                    j++;
                }
                if (j == m)
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
}