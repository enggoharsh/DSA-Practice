#include <iostream>  //code with harry tut 43
using namespace std; // ambiguity resolution using 2 method
class Base
{
public:
    void future()
    {
        cout << "Harsh you are good guy." << endl;
    }
};
class Derived : public Base
{
public:
    void future()
    {
        cout << "Harsh believe yourself you will do wonders." << endl; // this will overwrite future()
                                                                       // from base class.
    }
};
int main()
{
    Derived d;
    d.future();
    return 0;
}