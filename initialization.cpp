#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
the variable which is initialize/declare first will
get assgin first or
example:-
class Test{
    int a;
    int b;
    public:
    Test(int i,int j):a(i),b(j)
    {
        constructor Body
    }
}

*/
class Test
{
private:
    int b;
    int a;

public:
    // Test(int i, int j) : a(i), b(i )
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(i * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(b+j)-> this will throw garbage value because a is declare first and a is not assgin first;
    Test(int i, int j) : b(j), a(b + j) //  ->this time this will work bcz..b is declare firstand so initialized first..
    {
        cout << "Constructor is Executed" << endl;
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{
    Test obj1(23, 21);

    return 0;
}