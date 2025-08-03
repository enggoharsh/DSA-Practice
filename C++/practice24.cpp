#include <iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;

    }
    return fact;
}


 int main(){
    int n,r;
    cout<<"enter the value of n& r from n C r :"<<endl;
    cin>>n>>r;
    if(n<r){
        cout<<"enter value of r less than n."<<endl;
    }
    
    else{
cout<<"Binomial coefficient of " <<n<<" C "<<r<< " is "<<factorial(n)/(factorial(n-r)*factorial(r));
    }
 }