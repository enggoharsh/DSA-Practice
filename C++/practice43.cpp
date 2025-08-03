#include <iostream>               //code with harry tut 43
using namespace std;             //ambiguity resolution inheritance
class Base1{
    public : 
    void greet(){
        cout<<"Hello World"<<endl;
    }
};
class Base2{
    public : 
    void greet(){
        cout<<"Hello World I'm Harsh"<<endl;
    }
};
class Derived : public Base1,public Base2{
    public:
    void greet(){                         
        Base2::greet();                          //will says to print greet funtion from class Base1!!
   }
};

int main(){ 
Derived d1;
d1.greet();
return 0;
}