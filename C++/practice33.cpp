#include <iostream>
using namespace std;         //code with harry tut 29 constructors
class Complex{
    int a ,b;
    public:
    Complex(void);                         //intialising constructor
     void display(){
        cout<<" Your number is : "<<a<<" + "<<b<<"i"<<endl;
     }
};
Complex :: Complex(){
    a=10;
    b=20;
}
int main(){ 
Complex c1;
c1.display();
return 0;
}