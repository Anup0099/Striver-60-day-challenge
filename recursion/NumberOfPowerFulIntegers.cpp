#include <bits/stdc++.h>
using namespace std;

bool check(string s, int limit)
{

    int i = 0;
    long long num = stoll(s); // does stoi work for long long numbers?

    while (i > 0)
    {

        int rem = num % 10;
        if (rem > limit)
            return false;
    }
    return true;
}
long long numberOfPowerfulInt(long long start, long long finish, int limit, string s)
{
    long long ans = 0;
    for (int i = 1; i <= finish; i++)
    {
        string temp = to_string(i) + s;
        long long l = stoll(temp);
        // cout << temp << endl;

        if (check(temp, limit) and l <= finish and l >= start)
            ans++;
        }
    return ans;
}
int main()
{
    long long start = 1000, finish = 2000, limit = 4;
    string s = "3000";
    cout << numberOfPowerfulInt(start, finish, limit, s);
}