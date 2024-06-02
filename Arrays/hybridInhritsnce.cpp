#include <bits/stdc++.h>
using namespace std;
class Person
{
private:
protected:
    string name;

public:
    Person(const string &name) : name(name)
    {
    }
    void display()
    {
        cout << "The name " << name << endl;
    }
};
class Employee : public Person
{
protected:
    int employeeId;

public:
    Employee(const string &name) : Person(name)
    {
    }

};
int main() {}