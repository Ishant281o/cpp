#include <iostream>
using namespace std;
// We cannot have a virtual constructor, but we can have a virtual destructor
class Point
{
private:
    int a, b, c;

public:
    Point(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void showdata();
};
void Point :: showdata()
    {
        cout<<"Values of a, b and c is:"<<a<<","<<b<<"and"<<c;
    }
int main()
{
    
    Point p1(2,3,4);
    p1.showdata();
     return 0;
}