#include <bits/stdc++.h>
using namespace std;

// a company is planning a big sale at which they will give their customer a special promotional discount.Each customer that purchases a product from the company has a unique customerID numberes from 0 to N-1, andy the marketing head of the company , has sleected bill amounts of the n customers for the promotional scheme, the discount will be given to the customers whose bill amounts are perfect sqares . the customers may use this discount on future purchase.
int customers(vector<int> bill)
{
    int count = 0;
    for (int i = 0; i < bill.size(); i++)
    {
        int x = sqrt(bill[i]);
        if (x * x == bill[i])
        {
            count++;
        }
    }
    return count;
}
// for the file a.txt no read permission is granted.A c program executes the given code snippet:
// FILE *fp= fopen ("a.txt","r");
// output of the program is:
// a) compilation error
// b) runtime error
// c) garbage value
// d) none of the above
// ans: a
// explanation: fopen() returns NULL if the file is not found or if the file is not readable.
//so answer will runtime error as the file is not readable.
int main()
{
    
}