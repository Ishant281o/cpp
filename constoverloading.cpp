#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex c1 = Complex();
    c1.showdata();
    Complex c2 = Complex(6);
    c2.showdata();
    Complex c3 = Complex(6, 7);
    c3.showdata();

    return 0;
}