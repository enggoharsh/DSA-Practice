#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number.";
    cin>>num;
    do{
        if(num%2==0){
            cout<<num<<" is even."<<endl;
        }
        else {
            cout<<num<<" is odd."<<endl;
        }
        num=num+1;
    }
    while (num!=20);
    
    return 0;

}