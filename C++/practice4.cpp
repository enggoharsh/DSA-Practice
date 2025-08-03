#include<iostream>
using namespace std;
int main(){
 int num,i,product;
 cout<<"Enter the number: ";
 cin>>num;
 cout<< "you have entered "<<num<<endl;
 cout<<"Printing table of "<< num << endl;
 for (i=1;i<=10;i++){
    product=num*i;
    cout<< num<< " X "<<i<< " = "<< product<<endl;
 }
    return 0;

}