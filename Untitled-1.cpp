#include <iostream>
using namespace std;
class Y; // forward declaration
class X
{
    friend void add(X, Y); 
    private : int data;

public:
    void setdata(int value)
    {
        data = value;
    }
};

class Y
{
    friend void add(X, Y); 
    private : int num;

public:
    void setdata(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "summing data of X with Data of Y:" << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    Y b2;
    a1.setdata(38);
    b2.setdata(32);

    add(a1,b2);
    
    
    return 0;
}
