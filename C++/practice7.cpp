#include<iostream>
using namespace std;
int main(){
    int num,count=0,i;
    cout<<"Enter a number: ";
    cin>>num;
    for (i=0;i<num;i++)
    {
        if(num==0){
            break;
        }
        else{
         num= num/10;
       count++;
     
        }
    }

    cout<< count;
    
    return 0;

}