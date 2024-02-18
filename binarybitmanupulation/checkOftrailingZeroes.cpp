#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> v)
{
    int n = v.size();
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int orr = v[i] | v[j];
                int check_last_bit = orr & 1;
                if (check_last_bit == 0)
                {
                    flag = true;
                    break;
                }
            }
        }
    }
    return flag;
}
int main() {}