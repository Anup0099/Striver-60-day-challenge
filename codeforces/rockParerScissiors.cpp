#include <bits/stdc++.h>
using namespace std;
// Chef and Chefina are playing the famous game of Rock-Paper-Scissors.
// The game consists of
// �
// N rounds. In each round, both players choose one of the three moves: Rock, Paper, or Scissors, denoted by R, P, and S respectively.

// If both players play the same move, the current round ends in a draw and neither of them gets a point.
// If one of the players plays Rock and the other plays Scissors, the player who played Rock wins the round and gets a point.
// If one of the players plays Scissors and the other plays Paper, the player who played Scissors wins the round and gets a point.
// If one of the players plays Paper and the other plays Rock, the player who played Paper wins the round and gets a point.
// You are given a string
// �
// A of length
// �
// N denoting the moves made by Chefina in
// �
// N rounds.
// To win the game, Chef needs to score more than
// ⌊
// �
// 2
// ⌋
// ⌊
// 2
// N
// ​
//  ⌋ points.

// Find the lexicographically smallest sequence of moves that wins the game for Chef.

// Note:

// ⌊
// �
// ⌋
// ⌊x⌋ denotes the floor function. For example,
// ⌊
// 3
// 2
// ⌋
// =
// 1.
// ⌊
// 2
// 3
// ​
//  ⌋=1.
// A string
// �
// X is said to be lexicographically smaller than string
// �
// Y, if, for the first position where
// �
// X and
// �
// Y differ,
// �
// �
// <
// �
// �
// X
// i
// ​
//  <Y
// i
// ​
//  .
// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integers
// �
// N — the length of the string.
// The next line contains a string
// �
// A of length
// �
// N.
// Output Format
// For each test case, output on a new line, the lexicographically smallest string of length
// �
// N which wins the game for Chef.
string solve(string s)
{
    int n = s.length();
    string ans = "";
    int wins = n / 2 + 1;
    int rem = n;
    for (int i = 0; i < n; i++)
    {
        rem--;
        if (rem >= wins)
        {
            ans += 'P';
            if (s[i] == 'R')
            {
                wins--;
            }
        }
        else
        {
            if (s[i] == 'R')
                ans += 'P';
            else if (s[i] == 'P')
                ans += 'S';
            else
                ans += 'R';
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}