#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<< " Enter the three numbers: ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<" num1 is greatest number.";
    }
    else if (num2>num1 && num2>num3){
        cout<<"num2 is greatest number.";
    }
    else {
        cout<< "num3 is greatest";
    }
    return 0;
}