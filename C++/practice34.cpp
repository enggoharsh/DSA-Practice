#include <iostream>
using namespace std;         //code with harry tut 30  parameterised constructors
class Complex{
    int a ,b;
    public:
    Complex(int , int);                         //intialising constructor
     void display(){
        cout<<" Your number is : "<<a<<" + "<<b<<"i"<<endl;
     }
};
Complex :: Complex(int x, int  y){
    a=x;
    b=y;
}
int main(){ 
Complex c1(2,2);          //implicit
c1.display();
Complex b=Complex(27,28);
b.display();
}