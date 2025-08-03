#include<iostream>
using namespace std;
int main(){
    int num;
    int fact=1;
    cout<<"Enter a number:";
    cin>>num;
    int numR=num;
    while(num!=0){
fact=num*fact;
num=num-1;
    }
    cout<<"Factorial of "<<numR <<" is "<<fact;
    return 0;
}
