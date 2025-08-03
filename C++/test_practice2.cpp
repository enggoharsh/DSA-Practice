#include <iostream>
using namespace std;
class Employee{                      //use of const variable in class
    int id;
    static int count;
    public:
      void setData(){
        cout<<"enter the id : "<<endl;
        cin>>id;
        count++;

      }
      void getData(){
        cout <<" the id of this employee is "<<id<<" and this is employee number "<<count <<endl;
      }
};

int Employee::count;

int main(){ 
    Employee harsh ,aryan;
    harsh.setData();
        harsh.getData();
    aryan.setData();

    aryan.getData();


return 0;
}