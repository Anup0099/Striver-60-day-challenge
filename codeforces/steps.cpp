#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

using namespace std;

int helper(int index, int step, int steps, int badindex)
{
    if (step > steps)
    {
        return index;
    }

    if (index == badindex)
    {
        return index;
    }

    int take = helper(index + step, step + 1, steps, badindex);

    int not_take = helper(index, step + 1, steps, badindex);

    return max(take, not_take);
}

int maxindex(int steps, int badindex)
{
  vector<int> dp(steps + 1, 0);
    dp[0] = 0;
    for (int i = 1; i <= steps; i++)
    {
        
    
    }

}

int main()
{
    int steps = 4;
    int badindex = 6;
    cout << maxindex(steps, badindex) << endl;
    return 0;
}
