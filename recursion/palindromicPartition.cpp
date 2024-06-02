#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int low, int high)
{
    while (low < high)
    {
        if (s[low] != s[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
void partitionHelper(vector<vector<string>> &ans, string s, int ind, vector<string> &currentList)
{
    if (ind == s.size())
    {
        ans.push_back(currentList);
        return;
    }
    for (int i = ind; i < s.size(); i++)
{
        if (isPalindrome(s, ind, i))
        {
            currentList.push_back(s.substr(ind, i - ind + 1));
            partitionHelper(ans, s, i + 1, currentList);
            currentList.pop_back();
        }
    }
}
vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> currentList;
    partitionHelper(ans, s, 0, currentList);
    return ans;
}
int palindromicPartition(string str)
{
    vector<vector<string>> ans = partition(str);
    return ans.size();
}
int main()
{
    string str = "aaabba";
    cout << palindromicPartition(str) << "\n";
    return 0;

}