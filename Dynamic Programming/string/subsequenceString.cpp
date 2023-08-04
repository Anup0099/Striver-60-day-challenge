#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool canBePalindrome(string &s, vector<int> &startIndex, vector<int> &endIndex, vector<int> &subs)
{
    unordered_map<char, int> charCount;

    // Step 1: Count the occurrences of each character in the original string
    for (char ch : s)
    {
        charCount[ch]++;
    }

    // Step 2: For each query, simulate the substitutions and check if it's possible to form a palindrome
    for (size_t i = 0; i < startIndex.size(); i++)
    {
        int start = startIndex[i];
        int end = endIndex[i];
        int numSubs = subs[i];

        // Simulate the substitutions for the current query
        for (int j = start; j <= end; j++)
        {
            char ch = s[j];
            charCount[ch]--; // Reduce the count of the original character

            // If there are still substitutions remaining, try to use them
            while (numSubs > 0)
            {
                // Find a character that can be substituted to form a palindrome
                bool found = false;
                for (char c = 'a'; c <= 'z'; c++)
                {
                    if (charCount[c] > 0)
                    {
                        found = true;
                        charCount[c]--; // Reduce the count of the substituted character
                        break;
                    }
                }

                if (!found)
                {
                    // No more characters left to substitute, return false
                    return false;
                }

                numSubs--;
            }
        }
    }

    // Step 3: Check if the remaining characters can be arranged to form a palindrome
    int oddCount = 0;
    for (const auto &entry : charCount)
    {
        if (entry.second % 2 != 0)
        {
            oddCount++;
        }
    }

    // If there's more than one character with an odd count, it's not possible to form a palindrome
    return oddCount <= 1;
}

int main()
{
    string s = "xxdnssuqevu";
    vector<int> startIndex = {0};
    vector<int> endIndex = {0};
    vector<int> subs = {3};

    bool possible = canBePalindrome(s, startIndex, endIndex, subs);

    if (possible)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
