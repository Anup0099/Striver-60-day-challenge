#include <bits/stdc++.h>
using namespace std;
int bestClosingTime(string customers)
{
    int n = customers.size();
    vector<int> preforN;
    vector<int> preforY;
    preforN.push_back(0);
    preforY.push_back(0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (customers[i] == 'N')
        {
            count++;
        }
        preforN.push_back(count);
    }

    count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (customers[i] == 'Y')
        {
            count++;
        }
        preforY.push_back(count);
    }
    reverse(preforY.begin(), preforY.end());
    int ans = INT_MAX;

    int ind = 0;
    for (int i = 0; i < n + 1; i++)
    {
        int h = preforN[i] + preforY[i];
        if (h < ans)
        {
            ans = h;
            ind = i;
        }
    }
    return ind;
}
int bestClosingTime(string s)
{
    int n = s.length();
    int ans = INT_MAX;
    int maxHours = INT_MAX;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; i >= 0; j--)
        {
            if (s[j] == 'N')
            {
                sum++;
            }
        }
        for (int k = i + 1; k < n; k++)
        {
            if (s[k] == 'Y')
            {
                sum++;
            }
        }
        ans = min(ans, sum);
        maxHours = i;
    }
    return maxHours;
}
int best(string s)
{
    int n = s.length();
    vector<int> preforN(n + 1, 0), sufForY(n + 1, 0);
    preforN[0] = 0;
    sufForY[n] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == 'N')
        {
            preforN[i] = preforN[i - 1] + 1;
        }
        else
        {
            preforN[i] = preforN[i - 1];
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'Y')
        {
            sufForY[i] = sufForY[i + 1] + 1;
        }
        else
        {
            sufForY[i] = sufForY[i + 1];
        }
    }
    int penalty = INT_MAX;
    int maxHours = INT_MAX;
    for (int i = 0; i < n + 1; i++)
    {
        int curr = preforN[i] + sufForY[i + 1];
        if (curr < penalty)
        {
            penalty = curr;
            maxHours = i;
        }
    }
    return maxHours;
}
int main()
{
    string customers = "YYNY";
    cout << bestClosingTime(customers);
}