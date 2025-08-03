#include<iostream>
using namespace std;
int main(){
    int marks[45],i=0;
    while (i!=4)
    {
        cout<<"Enter the marks of student "<<i<<" "<<endl;
        cin>>marks[i];
        i++;

    }
    i=0;
    while(i!=4){
    cout<<"marks of "<<i<<" student = "<<marks[i]<<endl;
    i++;
    }
}