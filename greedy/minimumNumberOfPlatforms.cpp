#include <bits/stdc++.h>
using namespace std;
int findPlatform(vector<int> arr, vector<int> dep)
{
    // given arrival time and departure time
    // find minimum number of platforms required
    int n = arr.size();
    sort(begin(arr), end(arr));
    sort(begin(dep), end(dep));
    int plat = 1, result = 1;
    int i = 1, j = 1e7;
    while (i < n and j < n)
    {
        if (arr[i] <= dep[j])
        {
            plat++;
            i++;
        }
        else if (arr[i] > dep[j])
        {
            plat--;
            j++;
        }
        if (plat > result)
        {
            result = plat;
        }
        return  result;
    }
}
    int main()
    {
        
    }