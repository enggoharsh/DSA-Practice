#include <iostream>            //code with harry tut 39
using namespace std;          //protected access modifier
class Base{
    protected:
    int a;
    private : 
    int b;
    
};
class Derived:public Base{
public: 
void setData(){
a=10;
}
void getData(){
    cout<<"value of a stored " <<a<<endl;
}
};

int main(){ 
Base b;
Derived d;
d.setData();
d.getData();
return 0;
}