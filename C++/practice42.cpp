#include <iostream>          //code with harry: tut 41
using namespace std;         //multiple inheritance in deep dive;
class Base1{
    protected:
    int base1int;
    public: 
    void get_base1int(){
        base1int=10;
    }
};
class Base2{
    protected: 
    int base2int;
    public:
    void get_base2int(){
        base2int=20;
    }
};
class Derived: public Base1,public Base2{
    public:
    void display(){
        cout<<"value of base1: "<<base1int<<endl;
        cout<<"value of base2: "<<base2int<<endl;
        cout<<"the sum of base1 and base2: "<<base1int+base2int<<endl;
    }

};
int main(){ 
Derived d;
d.get_base1int();
d.get_base2int();
d.display();
return 0;
}