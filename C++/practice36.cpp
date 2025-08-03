#include <iostream>          //code with harry tut 34
using namespace std;         //copy constructor----->
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "Copy Constructor called :" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "value= " << a << endl;
    }
};
int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    Number z2 = z;
    z2.display();
    return 0;
}