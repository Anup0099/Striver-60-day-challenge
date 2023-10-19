#include <bits/stdc++.h>
using namespace std;
// Given n orders,each order consists of a pickup and a delivery service.

// Count all valid pickup/delivery possible sequences such that delivery(i) is always after of pickup(i).

// Since the answer may be too large, return it modulo 10^9 + 7.

int countOrders(int n)
{
    vector<int> arr(2 * n);

    // brute force approach
    // We have to find all p1 d1 and p2 d2 such that pickup is always before delivery
    // so we have to find all the permutations of the array such that p1<d1<p2<d2
    int pickup = 1;
    int delivery = 2;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = pickup;
            pickup += 2;
        }
        else
        {
            arr[i] = delivery;
            delivery += 2;
        }
    }
    // print the array
    // for (int i = 0; i < 2 * n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    int ans = 0;
    do
    {
        bool flag = true;
        for (int i = 0; i < 2 * n; i += 2)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = false;
                break;// if the pickup is after delivery then break the loop and check for the next permutation of the array
            }
        }
        if (flag)
        {
            ans++;
        }
    } while (next_permutation(arr.begin(), arr.end()));
    return ans;
}
int main() {
    cout<<countOrders(2);
}