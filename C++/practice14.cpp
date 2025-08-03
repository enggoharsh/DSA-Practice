#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double r1,r2,a,b,c,D,i1,i2;
    cout<< "Enter the  coefficient of quadratic equation ex: ax^2+bx+c  : ";
    cin>> a>> b>> c;
    D=sqrt((b*b)-(4*a*c));
if (D>0){
    r1=(-b+D)/(2*a);
    r2=(-b-D)/(2*a);
    cout<< "Roots are real and Unequal : "<< r1<<" and "<< r2;
}
else if (D==0){
    r1=-b/(2*a);
    r2=r1;
    cout<<" Roots are real and equal : "<< r1;

}
else {
   //  r1=(-b)/(2*a);
  //   i1=(D)/(2*a);
   // r2=(-b)/(2*a);
//  i2=(D)/(2*a);
    cout<<"Roots are imaginary."<<endl;
   

}
    return 0;
}