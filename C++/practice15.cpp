#include<iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Enter the terms upto which you want sum of numbers : ";
    cin>>num;
    for(i=0;i<=num;i++){
        sum=sum+i;
    }
    cout<<" sum of whole number upto "<< num<< " is "<<sum;
    return 0;
}