#include <bits/stdc++.h> 
using namespace std; 
// When Serezha was three years old, he was given a set of cards with letters for his birthday. They were arranged into words in the way which formed the boy's mother favorite number in binary notation. Serezha started playing with them immediately and shuffled them because he wasn't yet able to read. His father decided to rearrange them. Help him restore the original number, on condition that it was the maximum possible one.

// Input
// The first line contains a single integer n
//  (1⩽n⩽105
// ) — the length of the string. The second line contains a string consisting of English lowercase letters: 'z', 'e', 'r', 'o' and 'n'.

// It is guaranteed that it is possible to rearrange the letters in such a way that they form a sequence of words, each being either "zero" which corresponds to the digit 0
//  or "one" which corresponds to the digit 1

int main() {
    int n;cin>>n;
    string s;cin>>s;
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='z')zero++;
        else if(s[i]=='n')one++;
    }
    for(int i=0;i<one;i++)cout<<1<<" ";
    for(int i=0;i<zero;i++)cout<<0<<" ";
    cout<<endl;
} 