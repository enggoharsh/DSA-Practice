#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;
    do{
     cout<<num<< " X "<<i<<" = "<<num*i<<endl;
     i++;
    }while (i<11);

    return 0;
}
