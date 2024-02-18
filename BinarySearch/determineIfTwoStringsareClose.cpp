#include <bits/stdc++.h>
using namespace std;
bool closeStrings(string word1, string word2)
{
    int n = word1.length();
    int m = word2.length();
    if (n != m)
        return false;
    set<char> s1, s2;
    for (auto it : word2)
    {
        s1.insert(it);
    }
    for (auto it : word1)
    {
        s2.insert(it);
    }
    if (s1 != s2)
    {
        return false;
    }
    unordered_map<char, int> mp1, mp2;
    for (auto it : word2)
    {
        mp1[it]++;
    }
    for (auto it : word1)
    {
        mp2[it]++;
    }
    vector<int> v1, v2;
    for (auto it : mp1)
    {
        v1.push_back(it.second);
    }
    for (auto it : mp2)
    {
        v2.push_back(it.second);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    return v1 == v2;
    // time complexity of above code is O(nlogn) because we are using sort function and unordered_map and set are implemented using hash table so time complexity of insert and find is O(1)  and we are using two for loops so time complexity is O(n) so overall time complexity is O(nlogn)
    // space complexity of above code is O(n) because we are using two vectors
}
int main()
{
    string word1 = "abc";
    string word2 = "bca";
    cout << closeStrings(word1, word2);
}