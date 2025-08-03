#include <iostream>
using namespace std;
class Complex;
class Calculator{
    public: 
    //int add (int a,int b){
   //     return (a+b);
        
 //   }  
        int sumRealComplex(Complex ,Complex);
    
};

class Complex{
    int a,b;
    public: 
    friend int Calculator :: sumRealComplex(Complex,Complex);
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
int Calculator :: sumRealComplex(Complex c1,Complex c2){
    return (c1.a+c2.a);
}
int main(){ 
Complex c1,c2;
c1.setNumber(4,5);
c1.printNumber();
c2.setNumber(3,4);
c2.printNumber();
Calculator calc;
int res =calc.sumRealComplex(c1,c2);
cout<<"The real part of c1 and c2 is : "<<res<<endl;
return 0;
}