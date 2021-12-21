#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y); // constructor declaration.....Paramaterized constructor as it takes parameter as input.
    void showdata()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

complex::complex(int x, int y)
{
    cout << "Hello world for the Constructor Invokation" << endl;
    a = x;
    b = y;
}
int main()
{
    // implicite call.
    // complex c1(123, 34);
    // complex c2(2, 4);

    // explicete call.
    complex c1 = complex(13, 2);
    complex c2 = complex(3, 12);
    c1.showdata();
    c2.showdata();
    return 0;
}