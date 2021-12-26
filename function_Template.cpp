#include <iostream>
using namespace std;
// int funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// int funcAverage2(float a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
//--->>>Creating template fnction for same task.

template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Creating Function for swaping two variables;

int main()
{
    float d;
    d = funcAvg(2.3f, 3);
    cout << "Average value of two given numbers: " << d << endl;
    //  printf("Avg value of given numbers: %.2f ",d);
    int x = 12;
    int y = 8;
    swapp(x, y);
    cout << x 
    <<endl<< y << endl;

    return 0;
}