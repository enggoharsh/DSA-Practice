#include <iostream>                 //code with harry tut 48
using namespace std;                //code:examp of constructors in derieved class
class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 constructor is called."<<endl;

    }
    void printDataBase1(){
        cout<<"The value of data1 is : "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int j){
        data2=j;
        cout<<"Base2 constructor is called."<<endl;
    }
    void printDataBase2(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
class Derieved:public Base1,public Base2 {
    int derieved1,derieved2;
    public:
    Derieved(int a , int b, int c, int d):Base1(a),Base2(b){
        derieved1=c;
        derieved2=d;
        cout<<"Derieved class constructor is called."<<endl;
    }
    void printDataDerieved(){
        cout<<"The value of derieved1 and derieved2 is :  "<<derieved1<<"  "<<derieved2<<endl;
    }
};

int main(){ 
    Derieved harry(1,2,3,4);
    harry.printDataBase2();

return 0;
}