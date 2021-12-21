#include <iostream>
using namespace std;

class Animal
{
public:
    int Strength = 100;
    /*Animal()
    {
        cout << "Constructor of Animal class is called!!!" << endl;
        cout << "We are the animals we also have right to live our life" << endl;
    }*/
    void Eat()
    {
        cout << "I eat food for survival Motherfuckers\n"
             << endl;
        if (Strength >= 100)
        {
            cout << "I am Full Stop Feeding me for now..<:)" << endl;
        }
        else
        {
            Strength = (Strength + 10);
        }
    }
    void Run()
    {
        cout << "I will Run after you\n"
             << endl;
        Strength = (Strength - 20);
        if (Strength <= 50)
        {
            cout << "Give me Food Else i will DIE soon!!!" << endl;
        }
    }
    void Walk()
    {
        cout << "Took me on walk with you plzz:)\n"
             << endl;
        Strength = (Strength - 10);
        if (Strength <= 50)
        {
            cout << "Give me Food Else i will DIE soon!!!" << endl;
        }
    }
};

class Dog : public Animal
{
private:
    int bark_count = 0;

public:
    void bark()
    {
        if (bark_count < 2)
            cout << "I will bite after my Second Bark!!!!" << endl;
        else
        {
            cout << "Bhaoo Bhaoo I bited you MotherFucker!!!!" << endl;
        }
        bark_count++;
        Strength = (Strength - 5);
        if (Strength <= 50)
        {
            cout << "Give me Food Else i will DIE soon!!!" << endl;
        }
    }
};

int main()
{
    Dog bdog; // declaring the Object

    int choice;
    // if(choice=3){
    //         Strength= (Strength-20);
    //     }
    //     if(choice=4){
    //         Strength=(Strength-10);
    //     }
    //     if(choice=1){
    //         Strength=(Strength-5);
    //     }
    //     if(Strength<=30)
    //     {
    //         cout<<"Give Me Food else I will die soon..."<<endl;
    //     }
    while (true)
    {

        cout << "****Main Menu****" << endl;
        cout << bdog.Strength << endl;
        cout << "1.Bark\n2.Eat\n3.Run\n4.Walk\n5.Exit" << endl;
        cout << "Enter your Choice" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            bdog.bark();
            break;

        case 2:
            bdog.Eat();
            break;
        case 3:
            bdog.Run();
            break;
        case 4:
            bdog.Walk();
            break;
        case 5:
            exit(0);
            break;

        default:
            cout << "Enter the Valid number" << endl;
            break;
        }
    }

    return 0;
}
/*DRY principle:-do not repeat yourself,
This is a very important principle of programming.
The concept of inheritance provide you an ease over rewriting the same code.
We can reuse the data of one class into another class by inheriting it.

Types Of Inheritance
C++ supports five types of inheritance:

Single inheritance
Multiple inheritance
Hierarchical inheritance
Multilevel inheritance
Hybrid inheritance

Private and Public Accessibility of Data members by objects and member functions.

1. When the base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class.
Therefore, the public members of the base class are not accessible by the objects of the derived class only by the member functions of the derived class.

2. When the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class.
Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the base class.


*/