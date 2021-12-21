#include <iostream>
using namespace std;
class chuchu
{
private:
    int Salary;

public:
    void setSalary(int s)
    {
        Salary = s;
    }
    int getSalary()
    {
        return Salary;
    }
};

int main()
{
    chuchu q1;
    q1.setSalary(20000);
    cout << q1.getSalary();

    return 0;
}