#include <iostream>
using namespace std;
class Shop
{
private:
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Price of product: " << price << endl;
        cout << "IDs of project: " << id << endl;
    }
};

int main()
{
    int size = 3;
    int p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the ID and price of item: " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}