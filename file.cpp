#include <iostream>
#include <fstream>
using namespace std;
/*
fstreambase is a base class for->>
1. ifstream -->derived class
2. ofstream -->derived class

They are used to operate with files in c++ programs via two ways:-
1. With help of constructor
2. With the help of constructor.
*/
int main()
{
    // Opening a file using a constructor and reading it.

    string st; // declare a string

    string st2; // declare a string

   cout<<"Enter the Name :"<<endl;
   cin>>st; //Getting the user input of string.
    
    //Reading the data from the file.
    ifstream in("files.txt");
    in >> st2;
    getline(in, st2);
    cout << st2 ;
    in.close();
   
   //writing the data into the file.
    ofstream out("files.txt");
    st="Hello from LAGONITE GAMER side";
    out<<st;
    out.close();
   


    


    return 0;
}