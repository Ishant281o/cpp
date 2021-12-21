#include <iostream>
using namespace std;
class complex; // forward declaration...

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumimgcomplex(complex, complex);
};

class complex
{
private:
    int a;
    int b;
    friend class Calculator;
    //friend int Calculator::sumrealcomplex(complex, complex);
    //friend int Calculator::sumimgcomplex(complex, complex);
    // friend complex sumcomplex(complex, complex);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your number is here:" << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumimgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    Calculator p1;

    c1.setnumber(4, 5);
    c1.printnumber();

    c2.setnumber(2, 4);
    c2.printnumber();

    int result = p1.sumrealcomplex(c1, c2);
    int resultimg = p1.sumimgcomplex(c1, c2);
    cout << "Sum of real part of c1 and c2 is:" << result << endl;
    cout << "Sum of imaginary part of c1 and c2 is:" << resultimg << endl;
cout<<result<<"+"<<resultimg<<"i"<<endl;
    return 0;
}