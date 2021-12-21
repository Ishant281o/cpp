#include <iostream>
using namespace std;
class Bank
{
private:
    int moneydeposit;
    int time;
    float interestrate;
    float returnvalue;

public:
    Bank(){};
    Bank(int m, int t, int r);   // interest rate look like 4%
    Bank(int m, int t, float r); // interest rate look like 0.05
    void showdata();
};
Bank::Bank(int m, int t, float r)
{
    moneydeposit = m;
    time = t;
    interestrate = r;
    returnvalue = moneydeposit;

    for (int i = 0; i < t; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
Bank::Bank(int m, int t, int R)
{
    moneydeposit = m;
    time = t;
    interestrate = float(R) / 100;
    returnvalue = moneydeposit;

    for (int i = 0; i < t; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void Bank ::showdata()
{
    cout << "Value of Monetdeposit is:" << moneydeposit
         << " After t years = "
         << time <<" Return value is :" << returnvalue<< endl;
}

int main()
{

    Bank b1, b2, b3;

    int m, y;
    float r;
    int R;

    cout << "Enter your the Value of P, time and Interest Rate:" << endl;

    cin >> m >> y >> r;
    b1 = Bank(m, y, r);
    b1.showdata();
   
   
    cout << "Enter your the Value of P, time and Interest Rate:" << endl;
    cin >> m >> y >> R;
    b2 = Bank(m, y, R);
    b2.showdata();

    return 0;
}