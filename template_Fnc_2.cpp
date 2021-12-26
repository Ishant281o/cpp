#include <iostream>
using namespace std;
template <class T> // T is a generic data type for this class
class aman
{
public:
    T data;
    aman(T a)
    {
        data = a;
        cout<<a<<endl;
    }
    void display(); //predeclaration of display function
};
template <class T>
void aman<T>::display()
{
    cout << data << endl;
}
int main()
{
    aman<int> home(4); //constructor make the first call
    home.display(); //obj calling make the second call
    cout << home.data << endl; //obj->data invoke the 3rd call

    return 0;
}