#include <bits/stdc++.h>
using namespace std;

// an ecommerce compnay palns to give their customer a discount the dicount will be calculated on the basis of the bill amount of the order placed . The discount amount is the product  of the sum of all odd digits and the sum of all even digits of the customers total bill amount. if no. odd digit or even is present in the bill amount then 0 will be consider for its correspoding sum;

// input: 5144795
// output: 62
//  explanation: sum of odd digits = 5+1+7+9+5 = 27
//  sum of even digits = 4+4 = 8
//  discount = 27*8 = 216

int main()
{
    int n;
    cin >> n;
    int odd = 0, even = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            even += rem;
        else
            odd += rem;
        n /= 10;
    }
    cout << odd * even;
    return 0;
}