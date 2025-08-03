#include <iostream>
using namespace std;
int main(){
    int marks[100];
/*
    
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
  */
 /*for (int i=0;i<4;i++){
    cout<<"enter the marks of each student "<<i<<endl;
    cin>>marks[i];
 
 }
 for(int j=0;j<4;j++){
    
    cout<<"marks obtained by stduent " <<j<<" is "<< marks[j]<<endl;


 }*/
int*  p=marks;
cout<<"addres of the array is "<<p<<endl;
//cout <<"address of second block is "<<marks++;
   return 0;
}