/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int minimumChairs(string s)
{
    int n=s.size();
    int chairsneeded=0;
    int people=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='E')
        {
            people++;
            chairsneeded=max(chairsneeded,people);
        }
        else
        {
            people--;
        }
    }
    return chairsneeded;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}