#include <iostream>              //code with harry tut 33
using namespace std;           //dyanmic intialisation of objects using constructors
class BankDeposit{
    int principal,years;
    float returnValue,interestRate;
    public: 
    BankDeposit(){}
    BankDeposit(int ,int,float);            // r as 0.4 
    BankDeposit(int ,int ,int);             // r as 40
    void show();
};
BankDeposit::BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    for(int i=0;i<years;i++){
        returnValue =returnValue*(1+r);
    }

}
BankDeposit::BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<years;i++){
        returnValue=returnValue*(1+interestRate);
    }
}
void BankDeposit :: show(){
    cout<<"HERE IS ALL THE DETAILS OF YOUR: " <<endl;
    cout<<"Principal: "<<principal<<endl;
    cout<<"Years: "<<years<<endl;
    cout<<"Interest Rate: "<<interestRate<<endl;
    cout<<"Return Value: "<<returnValue<<endl;
}
int main(){
    int p,y,r;
    float R;
    
//cout<<"Enter the value of p,y,r respectively: "<<endl;
    //cin>>p>>y>>r;
//BankDeposit bd1(p,y,r);
//bd1.show();
cout<<"Enter the value of p,y and R repectively: "<<endl;
cin>>p>>y>>R;
BankDeposit bd2(p,y,R);
bd2.show();


return 0;
}