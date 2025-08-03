#include <iostream>
using namespace std;
int digSum(int n){
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
        
    }
    return sum;
    
}
int main(){
   int num;
   cout<<"enter the num : "<<endl;
   cin>>num;
   cout<<"the sum of digits of this number is : "<<digSum(num);
    return 0;
}