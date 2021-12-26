#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real part is :" << real << endl;
        cout << "The imaginary part is :" << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    //Complex c1;
    //Complex *ptr = &c1;
    Complex *ptr=new Complex;
    //(*ptr).setdata(45, 2);//we are just using pointer to access public data member of a class..
    //(*ptr).getdata(); is similar to this..
    ptr->setdata(33,23);
    ptr->getdata();
    return 0;
}