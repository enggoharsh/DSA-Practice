#include <iostream> //code with harry tut #19
using namespace std;
 /*int sum(int a ,int b, int c){
    cout<<" using function with three arguments "<<endl;
    return a+b+c;
 }
 int sum(int a ,int b){
    cout<<" using function with two arguments "<<endl;
    return a+b;
 }
    */
   float volume(float r,float h){
      return (3.14*r*r*h);
   }
   float volume(float a){
      return (a*a*a);
   }
   float volume(float l,float b,float h){
      return (l*b*h);
   }
int main(){ 

//int num1,num2,num3;
//cout<<"Enter the numbers: ";
//cin>>num1>>num2>>num3;
//cout<<"the sum of number having three arguments is "<< sum(0,1,3)<<endl;
//cout<<"the sum of numbers "<<sum(1,2)<<endl;
cout<<"the volume of cube is "<<volume(1.1)<<endl;
cout<<"the voulme of cuboid is "<<volume (1.1,1.2,1.3)<<endl;
cout<<"the volume of cylinder is "<<volume (4,6)<<endl;
return 0;
}