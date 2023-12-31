#include <bits/stdc++.h>
using namespace std;
// Given a natural number x
// . You can perform the following operation:

// choose a positive integer k
//  and round x
//  to the k
// -th digit
// Note that the positions are numbered from right to left, starting from zero. If the number has k
//  digits, it is considered that the digit at the (k+1)
// -th position is equal to 0
// .

// The rounding is done as follows:

// if the digit at the (k−1)
// -th position is greater than or equal to 5
// , then the digit at the k
// -th position is increased by 1
// , otherwise the digit at the k
// -th position remains unchanged (mathematical rounding is used).
// if before the operations the digit at the k
// -th position was 9
// , and it should be increased by 1
// , then we search for the least position k′
//  (k′>k
// ), where the digit at the k′
// -th position is less than 9
//  and add 1
//  to the digit at the k′
// -th position. Then we assign k=k′
// .
// after that, all digits which positions are less than k
//  are replaced with zeros.
// Your task is to make x
//  as large as possible, if you can perform the operation as many times as you want.

// For example, if x
//  is equal to 3451
// , then if you choose for the first operation:

// k=1
// , then after the operation x
//  will become 3450
// k=2
// , then after the operation x
//  will become 3500
// k=3
// , then after the operation x
//  will become 3000
// k=4
// , then after the operation x
//  will become 0
// To maximize the answer, you need to choose k=2
//  first, and then k=3
// , then the number will become 4000
// .
// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// Each test case consists of positive integer x
//  with a length of up to 2⋅105
// . It is guaranteed that there are no leading zeros in the integer.

// It is guaranteed that the sum of the lengths of all integers x
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each set of input data, output the maximum possible value of x
//  after the operations. The number should not have leading zeros in its representation.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        

    }
}