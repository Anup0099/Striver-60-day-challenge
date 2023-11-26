#include <bits/stdc++.h>
using namespace std;
// Write a program to find the sum of digits of a number until the sum becomes a single digit.

//     Input Format

//         Input format consists of a number

//             Constraints

//                 NA

//                     Output Format

//                         Output format consists of an integer

//                             Sample Input 0

//  Write a program to find the sum of digits of a number until the sum becomes a single digit.

// Input Format

// Input format consists of a number

// Constraints

// NA

// Output Format

// Output format consists of an integer

// Sample Input 0

// 78945623
// Sample Output 0

// 8 //
//     Sample Output 0

//     8

//     input is 16 then sum 7 int
int solve(int n)
{
    int ans = 0;
    int sum = 0;
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n = 78945623;
    cout << solve(n);//
}