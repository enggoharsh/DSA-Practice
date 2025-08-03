#include <iostream>
using namespace std;                     //code with harry tut 25
class Complex{                           //Passing objects as function arguments
    int a,b;
    public: 
    void setData (int k ,int l){
        a=k;
        b=l;

    }
    void setDataBySum(Complex , Complex  );     //declaring here will use later
       // a=o1.a +o2 .a;
       // b=o1.b+o2.b;

    
    void printNumber(){
        cout<<"Your entered complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

void Complex:: setDataBySum(Complex o1,Complex o2){                 // using ealier declared member function
    a=o1.a+o2.a;
    b=o1.b +o2.b;
}

int main(){ 
    Complex c1,c2,c3;
    c1.setData(4,4);
    c1.printNumber();

    c2.setData(4,4);
    c2.printNumber();

    c3.printNumber();
    c3.setDataBySum(c1,c2);
    c3.printNumber();

return 0;
}