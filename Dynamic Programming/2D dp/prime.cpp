#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int primeCount = 0;
    int nonPrimeCount = 0;
    int penalty = 0;
    
    for (int i = 0; i < n; ++i) {
        if (isPrime(arr[i])) {
            if (primeCount <= nonPrimeCount) {
                nonPrimeCount++;
                penalty += arr[i];
            } else {
                primeCount++;
            }
        } else {
            if (nonPrimeCount <= primeCount) {
                primeCount++;
                penalty += arr[i];
            } else {
                nonPrimeCount++;
            }
        }
    }
    
    cout << penalty << endl;
    
    return 0;
}
