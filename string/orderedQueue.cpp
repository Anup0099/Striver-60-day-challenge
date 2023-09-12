#include <bits/stdc++.h>
using namespace std;
string orderlyQueue(string s, int k)
{
    int n = s.length();
    string maxi = s;
    if (k > 1)
    {
        sort(maxi.begin(), maxi.end());
        // time complexity: O(nlogn)
        return maxi;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            string temp = "";
            for (int j = i; j < n; j++)
            {
                temp += s[j];
            }
            temp += s.substr(0, i);
            maxi = min(maxi, temp);
        }
        return maxi;
        //time complexity: O(n^2)
        //space complexity: O(n)
    }
}
bool chekPangram(string sentence)
{
    int n = sentence.size();
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (sentence.find(c) == string::npos)//it means if the character is not found in the string then it will return string::npos
        {
            return false;
        }
    }
    return true;
    //time comlexity: O(n)
    //space complexity: O(1)
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "cba";
    int k = 1;
    cout << orderlyQueue(s, k);
}