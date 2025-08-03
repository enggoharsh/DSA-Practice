#include<iostream>
using namespace std;
int main(){
    double num,i;
    cout<<"Enter a number:";
    cin>>num;
    for ( i = 0; i < 10; i++)
    {
        if(num/i==5){
            cout<<"HARSH";
        }
    }
    
    return 0;

}