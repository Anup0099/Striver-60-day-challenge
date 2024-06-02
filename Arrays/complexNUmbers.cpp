#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    float i, r;

public:
    Complex(float r, float i)
    {
        this->r = r;
        this->i = i;
    }
    Complex() {}
    void displayData()
    {
        cout << "real part= " << r << endl;
        cout << "imaginary part= " << i << endl;
    }
    Complex operator+(Complex c)
    {
        return Complex(r + c.r, i + c.i);
    }
};
int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c = c1 + c2;
    c.displayData();
}