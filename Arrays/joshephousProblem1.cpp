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
    int n;
    cin >> n;
    vector<int> elements(n);
    for (int i = 0; i < n; i++)
    {
        elements[i] = i + 1;
    }

    while (elements.size() > 1)
    {
        vector<int> temp;
        for (int i = 0; i < elements.size(); i++)
        {
            if (i % 2 == 1)
            {
                cout << elements[i] << " ";
            }
            else
            {
                temp.push_back(elements[i]);
            }
        }
        if (elements.size() % 2 == 0)
        {
            elements = temp;
        }
        else
        {
            int startingelement = temp.back();
            temp.pop_back();
            elements.clear();

            elements.push_back(startingelement);
            for (int i = 0; i < temp.size(); i++)
            {
                elements.push_back(temp[i]);
            }
        }
    }
    cout << elements[0] << endl;
}