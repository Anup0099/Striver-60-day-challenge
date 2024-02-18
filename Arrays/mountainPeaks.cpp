#include <bits/stdc++.h>
using namespace std;
vector<int> findPeaks(vector<int> &arr)
{
    int n = arr.size();
    vector<int> peaks;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
        {
            peaks.push_back(i);
        }
    }
    return peaks;
}
int main() {}