#include <unordered_map>
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<string, int> m1, m2;
    for (int num : arr1) {
        string word = to_string(num);
        for (int i = 0; i < word.size(); ++i) {
            m1[word.substr(0, i+1)] = 1;
        }
    }

    for (int num : arr2) {
        string word = to_string(num);
        for (int i = 0; i < word.size(); ++i) {
            m2[word.substr(0, i+1)] = 1;
        }
    }
    for(auto& pair : m1) {
        cout << pair.first << " " << pair.second << endl;
    }
    int ans = 0;
    for (auto& pair : m1) {
        if (m2[pair.first] > 0) {
            ans = max(ans, (int)pair.first.size());
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {123, 456, 789};
    vector<int> arr2 = {123, 456, 789};
    cout << longestCommonPrefix(arr1, arr2);
}