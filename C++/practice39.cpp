#include <iostream>                        //code with harry tut38 
using namespace std;  //single inheritance deep dive
class Base{
    int data1;
    public: 
    int data2;
    void setData(){
        data1=10;
        data2=20;
    }
    int getData1();
    int getData2();
};
int Base::getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}
class Derived : public Base{
    int data3;
    public: 
    void process();
    void display();

};
void Derived ::process(){
    data3=data2*getData1();

}
void Derived :: display(){
    cout<<" value of data1: "<<getData1()<<endl;
    cout<<" value of data2: "<<data2<<endl;
    cout<<" value of data3: "<<data3<<endl;
}

int main(){ 
Derived d1;
d1.setData();
d1.process();
d1.display();
return 0;
}