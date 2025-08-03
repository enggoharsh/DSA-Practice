#include<iostream>
using namespace std;
int main(){

    int t1=0,t2=1,nextterm=0,n,i;
    cout<<"Enter the number of terms: ";
    cin>>n;
    if (n<=0)
    {
    cout<<" Please enter a positive integer";
    }
    else if (n==1){
    cout<<t1;
    }
    else{


cout<< t1<< " "<<t2<<  " ";
for (i=2;i<n;i++){
    nextterm=t1+t2;
    cout<<nextterm<<" ";
    t1=t2;
    t2=nextterm;
}
    }
    return 0;
}