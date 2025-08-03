#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0,original;
    cout<<"Enter the number: ";
    cin>>num;
    original=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original==rev){
        cout<<"Given number "<<original<< " is a palindrome";

    }
    else{
        cout<<"Given number "<<original<<" is not a palindrome";
    }
    return 0;
}