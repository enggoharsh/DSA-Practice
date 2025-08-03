#include<iostream>
using namespace std;
int main(){
   int marks;
   cout<<"Enter the obtained marks by student: ";
   cin>>marks;
   if(marks>100){
      cout<<"enter valid input";
   }
   else{
   if(marks>=91){
      cout<<"awarded grade A+";
   }
   else if (marks>=81){
      cout<<" awarded grade A";
   }
   else if(marks>=71){
      cout<<"awarded grade B+";
   }
   else if (marks>=61){
      cout<<"awarded grade B";
   }
   else {
      
      cout<<"you are fail";
   }
}
    return 0;

} 