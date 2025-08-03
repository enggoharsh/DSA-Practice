#include<iostream>
using namespace std;

//declaring the function
int sum(int x, int y){
    int c=x+y;
    return c;
}

//main program
int main(){
    int num1,num2;
    cout<<"enter the numbers : ";
    cin>> num1>>num2;
    cout<<"the sum of two numbers is : "<<sum(num1,num2);
    return 0;
}