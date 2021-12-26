#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Solemon
{
public:
    T1 a;
    T2 b;
    T3 c;
    Solemon(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "Value a is :" << a << endl;
        cout << "Value b is :" << b << endl;
        cout << "Value c is :" << c << endl;
        cout<<endl;
        cout<<endl;
    }
};

int main()
{
    Solemon<> doremon(23, 12.23, 'W');
    doremon.display();
    Solemon<float, char, char> Nobita(23.1, 'c', 'W');
    Nobita.display();
    return 0;
}