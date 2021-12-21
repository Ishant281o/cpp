#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;

public:
    void setdata(int w, int h)
    {
        width = w;
        height = h;
    }
//    void setwidth(int w)
//     {
//         width = w;
//     }
//     void setheight(int h)
//     {
//         height = h;
//     } 
    int getwidth()
    {
        return width;
    }
    int getheight()
    {
        return height;
    }

    int area()
    {
        int A = width * height;
        return A;
    }
};
class RectangleArea : public Rectangle
{
public:
    void display()
    {
        cout << "Width of Rec  :" << getwidth() << endl;
        cout << "Height of Rec  :" << getheight() << endl;
    }
};
int main()
{
    RectangleArea r1;
    r1.setdata(40, 50);
    cout << r1.area() << endl;
    r1.display();
    return 0;
}