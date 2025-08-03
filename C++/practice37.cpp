#include <iostream>            //code with harry tut 35
using namespace std;              //destructors->>>>
int count=0; 
class num{
  
    public:
    num(){
        count++;
        cout<<"this is time when constructor is called for object no "<<count<<endl; 
    }
    ~num(){
        cout<<"This is the time when destructor is called for object no "<<count<<endl;
        count--;
    }

};
int main(){ 
    cout<<"We are inside our main function."<<endl;
    cout<<"Crating the first object: "<<endl;
    num n1;
    { 
        cout<<"Entering another scope: "<<endl;
        cout<<"Creating two other objects n1 and n2: " <<endl;
        num n1,n2;
        cout <<"Existing this scope."<<endl;
    }
     cout<<" back to main."<<endl;
return 0;
}