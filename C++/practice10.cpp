#include<iostream>
using namespace std;
int main(){
    int pro=1,num,original;
    cout<<"Enter the number:  ";
    cin>>num;
    original=num;
    while(num!=0){
        pro=pro*num;
        num=num-1;
    }
    cout<<"Factorial of number "<< original <<" is "<<pro;
    return 0;
}
