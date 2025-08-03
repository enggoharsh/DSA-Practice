#include <iostream>
using namespace std;               // call by reference using reference variables.
void swapReference(int &,int &);
int main(){ 
int num1=2,num2=3;
cout <<"the unchanged values are "<<num1<<" & "<<num2<<endl;
swapReference(num1,num2);
cout <<"the changed values are "<<num1<<" & "<<num2<<endl;

return 0;
}

 void swapReference(int &a,int &b ){
    int temp=a;
    a=b;
    b=temp;
 }