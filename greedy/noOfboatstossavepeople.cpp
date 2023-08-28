#include <bits/stdc++.h>
using namespace std;
int numRescueBoats(vector<int> &people, int limit)
{
    int n = people.size();
    int i = 0, j = n - 1;
    sort(people.begin(), people.end());
    int ans = 0;
    while (i <= j)
    {
        if (people[i] + people[j] <= limit)
        {
            i++;
        }
        j--;
        ans++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}