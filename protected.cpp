#include <iostream>
using namespace std;
class BaseA
{
public:
    void greet()
    {
        cout << "NAMASTY Swagat hai aapka" << endl;
    }
};
class BaseB
{
public:
    void greet()
    {
        cout << "Hello, How are you? " << endl;
    }
};
class Derived : public BaseA, public BaseB
{
    int a;

public:
    void greet()
    {
        BaseB::greet();
    }
};

class ZX
{
    int q;

public:
    void say()
    {
        cout << "Hello Motherfuckers!!" << endl;
    }
};
class ZY : public ZX
{
    int b;

public:
    // void say()
    // {
    //     cout << "Hello Pyaarai mitroon" << endl;
    // }
};

int main()
{
    /*Amiguity 1
    BaseA aobj;
    BaseB bobj;
    Derived dobj;

   // aobj.greet();
    //bobj.greet();
    dobj.greet();*/

    // Ambiguity 2
    // ZX obj1;
    // obj1.say();
    ZY objder;
    objder.say();

    return 0;
}