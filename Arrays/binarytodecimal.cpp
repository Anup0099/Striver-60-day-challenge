#include <bits/stdc++.h>
using namespace std;
int btod(int n)
{
    int ans = 0;
    int dec_value = 0; // initializing the decimal value to 0
    int base = 1;      // initializing the base value to 1
    while (n > 0)
    {
        int last_digit = n % 10;        // extracting the last digit of the binary number
        n = n / 10;                     // removing the last digit of the binary number
        dec_value += last_digit * base; // multiplying the last digit with the base value and adding it to the decimal value
        base = base * 2;                // multiplying the base value by 2
    }
    return dec_value;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 101;
    cout<<btod(n);
}
