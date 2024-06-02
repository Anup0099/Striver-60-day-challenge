/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor)
{
    if (dividend == divisor)
    {
        return 1;
    }
    bool sign = true;
    if (dividend < 0 and divisor > 0)
        sign = false;
    if (dividend > 0 and divisor < 0)
        sign = false;
    int n = abs(dividend);
    int m = abs(divisor);
    int ans = 0;
    while (n >= m)
    {
        int count = 0;
        while (n >= (m << (count + 1)))
        {
            count++;
        }
        ans += 1 << count;
        n -= m << count;
    }
    if(ans>=pow(2,31) and sign==true)
    {
        return pow(2,31)-1;
    }
    if(ans>=pow(2,31) and sign==false)
    {
        return -pow(2,31);
    }
    return sign ? ans : -ans;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}