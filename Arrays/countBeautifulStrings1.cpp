#include <bits/stdc++.h>
using namespace std;
// You are given a string s and a positive integer k.

// Let vowels and consonants be the number of vowels and consonants in a string.

// A string is beautiful if:

// vowels == consonants.
// (vowels * consonants) % k == 0, in other terms the multiplication of vowels and consonants is divisible by k.
// Return the number of non-empty beautiful substrings in the given string s.

// A substring is a contiguous sequence of characters in a string.

// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

// Consonant letters in English are every letter except vowels.
// int beautifulSubstrings(string s, int k)
// {
//     int n = s.size();
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int vowels = 0, consonants = 0;
//         for (int j = i; j < n; j++)
//         {
//             if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
//             {
//                 vowels++;
//             }
//             else
//             {
//                 consonants++;
//             }
//             if (vowels == consonants && vowels * consonants % k == 0)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
long long beautifulSubstrings(string s, int k)
{
    int n = s.size();
    int count = 0;
    int vowels = 0, consonants = 0;
    int freq[n + 1][2];
    memset(freq, 0, sizeof(freq));
    freq[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' ||
            s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        int rem = (vowels - consonants) % k;
        if (rem < 0)
        {
            rem += k;
        }
        count += freq[rem][i % 2];
        freq[rem][i % 2]++;
    }
    return count;
}
int main()
{

    string s = "baeyh";
    int k = 2;
    cout << beautifulSubstrings(s, k);
}