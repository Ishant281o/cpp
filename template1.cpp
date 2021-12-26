#include <iostream>
using namespace std;
// parameterized class -->>Templates
// Why to use templates;
// to follow DRY principle and to make generic programs.
template <class T> //syntax for template  template< class name of geniric datatype >
                    //   class name of class {
                     //     body of normal class.
                    //                    }
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.1;
    v1.arr[1] = 2.2;
    v1.arr[2] = 3.3;

    vector<float> v2(3);
    v2.arr[0] = 3.3;
    v2.arr[1] = 2.2;
    v2.arr[2] = 1.1;
    float a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}