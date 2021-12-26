#include <iostream>
using namespace std;

int main()
{
    // Basic Example:->
    int a = 7;

    // new ek operator and keyword both  hai
    int *ptr = &a;
    *ptr = 79; // Here we are assigning the value to a via ptr which holds the address of a;
   
    float *p = new float(32.34);
   
    int *arr = new int[3];
   
    arr[0] = 10;
    
    // arr[1] = 20;
    
    *(arr + 1) = 22;
    
    arr[2] = 30;
   
    // delete[] arr;//Here we are deleting the array and freeying the memory.
   
    cout << "Value of a at ptr  is :" << *ptr << endl;
    cout << "Value of b at p  is :" << *p << endl;
    cout << "Value of b at arr[0]  is :" << arr[0] << endl;
    cout << "Value of b at arr[1] is :" << arr[1] << endl;
    cout << "Value of b at arr[2] :" << arr[2] << endl;
    return 0;
}