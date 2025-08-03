#include<iostream> 
using namespace std;        //code with harry tut 28
class Y;
class X
{
    int val1;

public:
    void setData(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
    friend void exchange(X &, Y &);
};
class Y
{
    int val2;

public:
    void setData(int b)
    {
        val2 = b;
    }
    void display()
    {
        cout << val2 << endl;
    }
    friend void exchange(X &, Y &);
};
void exchange(X &a1, Y &b1)
{
    int temp = a1.val1;
    a1.val1 = b1.val2;
    b1.val2 = temp;
}

int main()
{
    X c1;
    Y c2;
    cout << " value of c1 and c2 before exchange : " << endl;
    c1.display();
    c2.display();
    cout << " Value of c1 and c2 after exchange: " << endl;
    exchange( c1,  c2);
    c1.display();
    c2.display();

    return 0;
}