#include <iostream>             //code with harry tut 37
using namespace std;          // single inheritance 
class Employee{
  public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    Employee(){}
};
class Programmar : public Employee{
    public: 
    Programmar(int inpId){
        id=inpId;
    }
    int language_code=9;
    void getData(){
        cout<<" ID = "<<id<<endl;
    }
};
int main(){ 
Employee harry(1),rohan(2);
cout<<"id = "<<harry.id<<" salary = "<<harry.salary<<endl;
Programmar p1(3);
p1.getData();

return 0;
}