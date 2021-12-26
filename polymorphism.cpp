#include <iostream>
using namespace std;
// Polymorphism means one name and multiple forms
//-eg. Function overloading
/*
Polymorphism is of two types:-
1.Complie time polymorphism....Static binding

1.1->> It can be achived by Function and operator overloading

2.Run time polymorphism....Dynamic binding

2.2->> It can be achived by virtual functions.

*/
class Base
{
public:
    int var_base;
    void display()
    {
        cout << "Value from base class:) " << endl;
        cout << "Value of var_base: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;

    void display()
    {
        cout << "Value from Derived class:) " << endl;
        cout << "Value of var_Derived: " << var_derived << endl;
    }
};
main()
{
    Base obj_base;            // object of base class
    Base *base_class_pointer; // creating pointer of base class

    base_class_pointer = &obj_base;
    base_class_pointer->var_base = 98; // here function of base class is called because here it depends on type of pointer not where the pointer being pointing, Its called static binding.
    base_class_pointer->display();

    Derived *derived_class_pointer; // creating pointer of Derived class
    Derived obj_derived;            // oject of derived class

    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 2300;
    derived_class_pointer->display();

    return 0;
}