#include<iostream>  
using namespace std;  
void fun(int);  
void fun(double);  
void fun(int i);  
{  
    std::cout << "Value of i is : " <<i<< std::endl;  
}  
void fun(double j)  
{  
    std::cout << "Value of j is : " <<j<< std::endl;  
}  
int main()  
{  
    fun(12);  
    fun(1.2);  
    return 0;  
}  
/*Function overloading Amiguity Errors:-

1.Type conversion;
In Type Conversion Complier will confused with Data type of Argument passed, like float and double.
Complier always consider float value as double by default.

2.Default Argument;

3.Pass by reference;
*/

/*Operator Overloading 
()Rules for Operator Overloading

1.Existing operators can only be overloaded, but the new operators cannot be overloaded.

2.The overloaded operator contains atleast one operand of the user-defined data type.

3.We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.

4.When unary operators are overloaded through a member function take no explicit arguments, but, if they are overloaded by a friend function, takes one argument.

5.When binary operators are overloaded through a member function takes one explicit argument, and if they are overloaded through a friend function takes two explicit arguments.*/