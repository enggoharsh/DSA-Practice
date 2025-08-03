#include <iostream>
using namespace std;
class B{
    public:
    void say(){
        cout<<"Hello World"<<endl;

    }
};
class C :public B{
    public: 
    void say(){
        cout<<"Hello World My Beautiful People"<<endl;
    }
};

int main(){ 
B b1;
C c1;
b1.say();
c1.say();
return 0;
}