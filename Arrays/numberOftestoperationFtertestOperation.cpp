#include <bits/stdc++.h>
using namespace std;
int countTestedDevices(vector<int> &batteryPercentages)
{
    int n = batteryPercentages.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (batteryPercentages[i] > 0)
        {
            ans++;
            int j;
            for (j = i + 1; j < n; j++)
            {
                batteryPercentages[j]= batteryPercentages[j]-1;
            }
        }
        else{
            continue;
        }
    }
    return ans;
}
int main() {}