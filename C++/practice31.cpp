#include <iostream>
using namespace std;
class Y;          //forward declaration
class X{
    int data;
    public:
    friend void add (X,Y);
    void setValue(int value){
        data =value;
    }
};
class Y{
    int num;
    friend void add (X,Y);
    public:
    void setValue(int value){
        num=value;
    }
};
void add (X a, Y b){
    cout<<"The sum of a and b is : "<<a.data+b.num<<end;
}
int main(){
    X a1;
    a1.setValue(4);

    Y b1;
    b1.setValue(3);
    add (a1,b1);
return 0;
}