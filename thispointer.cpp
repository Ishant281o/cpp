#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "Value of a is :" << a << endl;
    }
};

int main()
{
    //this is a key word or pointer which points to the object which invokes the 
    //member fuction. 
    A obj;
    obj.setData(4);

    return 0;
}