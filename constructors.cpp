#include <iostream>
using namespace std;
class complex
{
    private:
    int a,b;
public:
    complex(void);

    void printdata()
    {
        cout << "your Complex number is" << a << "+" << b << "i" << endl;
    }
};

complex::complex(void)
{
    a = 10;
    b = 12;
}

int main()
{
    complex c;
    c.printdata();

    return 0;
}
//constructor properties:-
//constructor is declare in the public section.
//They are automatically called(invoked) when an object of a class is created.
//Do not have return type not even void type.
//It can have default arguments.
//We can not refer to their address.
