#include <iostream>
using namespace std;
//Class template for multiple parameters (COMMA seperated)....(one,two,more than two)
template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};
int main()
{
    myclass<float,char> obj(2.231, 'a');
    obj.display();

    return 0;
}