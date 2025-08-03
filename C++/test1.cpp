#include <iostream>
using namespace std;
class Employee{
    int id;
    public:
    float salary;
    void setData();
    void getData();
};
void Employee::setData(){
    cout<<"Enter the id of employee : "<<endl;
    cin>>id;
    cout<<"Enter the salary of employee: "<<endl;
    cin>>salary;
} 
void Employee ::  getData(){
    cout<<"id of employee is " <<id<<endl<<
    "salary of employee is : "<<salary <<endl;
}
class programmer :public Employee{

};
int main(){ 
    Employee a,b;
    a.setData();
    a.getData();

return 0;
}