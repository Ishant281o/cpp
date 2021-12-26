#include <iostream>
using namespace std;
class Base
{
public:
    int var_base;
    virtual void display() // here we make it a virtual funtion by using the virtual keyword
                           // This make sure that the pointer pointing function is class irrespective of the class.
    {
        cout << "1.Value from base class:) " << endl;
        cout << "1.Value of var_base: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;

    void display()
    {
        cout << "2.Value from Derived class:) " << endl;
        cout << "2.Value of var_Derived: " << var_derived << endl;
    }
};
int main()
{
    Base objB1;    // creating objects
    Derived objD1; // creating objects

    Base *ptrbase;       // creating pointers
    Derived *ptrderived; // creating pointers

    ptrbase = &objD1;
    ptrbase->var_base = 14;
    ptrbase->display();

    

    return 0;
}