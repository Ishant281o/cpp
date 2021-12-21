#include <iostream>
using namespace std;
/*
Student->Test;
Student->Sports;
Test and Sports ->Result;
*/
class Student
{
protected:
    int rollnum;

public:
    void set_number(int a)
    {
        rollnum = a;
    }
    void print_number()
    {
        cout << "Roll number of a student: " << rollnum << endl;
    }
};

class Test : virtual public Student
{
protected:
    float phy, math;

public:
    void set_marks(float p, float m)
    {
        phy = p;
        math = m;
    }
    void print_marks()
    {
        cout << "Marks in Physics and Maths respectively : " << phy << "  " << math << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void print_score()
    {
        cout << "Overall score in all sports is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void result()
    {

        total = (phy + math + score);
    }
    void display_result()
    {
        print_number();
        print_marks();
        print_score();
        cout << "Result of this semester:" << total << endl;
    }
};
int main()
{
    Result r1;
    r1.set_number(69);
    r1.set_marks(89, 56);
    r1.set_score(6);
    r1.display_result();

    return 0;
}