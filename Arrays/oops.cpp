#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void saymyname()
    {
        cout << "ANup pal"
             << "\n";
    }
};
class B : public A
{
public:
    void saymyname()
    {
        cout << "ayush raj"
             << "\n";
    }
};
int main() {
    A obj;
    obj.saymyname();
    B obj2;
    obj2.saymyname();
}


// operator overloading in cpp what it is and how it works
//operator overloading is a concept in cpp where we can change the behaviour of an operator according to our way. we can make custom operator fucntion okay.


