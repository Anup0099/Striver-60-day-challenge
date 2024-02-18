#include <bits/stdc++.h> 
using namespace std;
// As you probably know, chess is a game that is played on a board with 64 squares arranged in an 8×8
//  grid. Columns of this board are labeled with letters from a to h, and rows are labeled with digits from 1 to 8. Each square is described by the row and column it belongs to.


// The rook is a piece in the game of chess. During its turn, it may move any non-zero number of squares horizontally or vertically. Your task is to find all possible moves for a rook on an empty chessboard.

// Input
// The first line of input contains single integer t
//  (1≤t≤64
// ) — the number of test cases. The descriptions of test cases follow.

// Each test case contains one string of two characters, description of the square where rook is positioned. The first character is a letter from a to h, the label of column, and the second character is a digit from 1 to 8, the label of row.

// The same position may occur in more than one test case.

// Output
// For each test case, output descriptions of all squares where the rook can move, in the same format as in the input.

// You can output squares in any order per test case. 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=s[0]-'a';
        int y=s[1]-'0';
        for(int i=0;i<8;i++)
        {
            cout<<char('a'+i)<<y<<endl;
        }
        for(int i=1;i<=8;i++)
        {
            cout<<char('a'+x)<<i<<endl;
        }
    }
} 