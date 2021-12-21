#include<iostream>
using namespace std;
 int num =0;
//Destructor nor take argument neither returns any value...
class Name{ 
    public:
   

    
    Name(){num++;
cout<<"This the time when Constructor is called for number "<<num<<endl;

    }
    ~Name(){
        cout<<"this time Destructor is Called for number "<<num<<endl;
        num--;
    }

};



int main(){
    cout<<"We are in the main function"<<endl;
    cout<<"Creating the firt object"<<endl;
    Name n1;
    {
        cout<<"Entering the Block"<<endl;
        cout<<"Creating 2nd and 3rd OBJs"<<endl;
        Name n2,n3;
        cout<<"Exiting the Block"<<endl;



    }
    cout<<"Back to main function"<<endl;
    
    

return 0;
}