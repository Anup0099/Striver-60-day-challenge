#include <bits/stdc++.h>
using namespace std;
bool checkSequentialDigit(int n)
{
    int last = n % 10;
    n /= 10;
    while (n > 0)
    {
        if (n % 10 != last - 1)
        {
            return false;
        }
        last = n % 10;
        n /= 10;
    }
    return true;
}
vector<int> sequentialDigits(int low, int high)
{
    vector<int> ans;
    queue<int> q;
    for (int i = 1; i <= 8; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        int num = q.front();
        q.pop();
        if (num >= low and num <= high)
        {
            ans.push_back(num);
        }
        int lastDigit = num % 10;
        if (lastDigit < 9)
        {
            q.push(num * 10 + lastDigit + 1);
        }
    }
    return ans;
}
int main()
{
    int low, high;
    cin >> low >> high;
    vector<int> ans = sequentialDigits(low, high);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}