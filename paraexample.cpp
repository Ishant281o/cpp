#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
class point
{
    friend void dist(point, point);

private:
    int a, b;

public:
   //declare and define the constructor
    point(int x, int y)
    {
        a = x;

        b = y;
    }
    void display()
    {
        cout << "(" << a << "," << b << ")" << endl;
    }
};

// calculating the distance between two points in 2D plane..
void dist(point p1, point p2)
{
    float d;
    d = sqrt(pow(p1.a - p2.a, 2) + pow(p1.b - p2.b, 2));

    cout <<"Distance between two number:"<< d << endl;
}
int main()
{
//explicite declaration
    point p1 = point(3, 4);
    p1.display();

    point p2 = point(6, 5);
    p2.display();

    dist(p1, p2);

    return 0;
}