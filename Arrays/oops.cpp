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
class B : private A
{
public:
    void saymyname()
    {
        cout << "ayush raj"
             << "\n";
    }
};
class c: private B
{
    public:
    void saymyname()
    {
        cout << "gaurav"
             << "\n";
    }
};
class Animal{
    public:
   virtual void speak()
    {
        cout<<"g is animal";
    }
};
class Dog:public Animal{
    public:
    void speak() override
    {
        cout<<"dog bark";
    }
};

int main() {
    A obj;
    obj.saymyname();
    B obj2;
    obj2.saymyname();
    c obj3;
    obj3.saymyname();
    Dog d;
    d.speak();
    Animal a;
    a.speak();
}


// operator overloading in cpp what it is and how it works
//operator overloading is a concept in cpp where we can change the behaviour of an operator according to our way. we can make custom operator fucntion okay.


