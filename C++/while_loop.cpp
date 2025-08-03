#include<iostream>
using namespace std;
int main(){
    double num;
    int i=1;
    cout<<"Enter the number:";
    cin>>num;
    while(i!=11){
        cout<<num<<"X"<<i<<" = "<<num*i<<endl;
        i=i+1;
    }

    return 0;

}