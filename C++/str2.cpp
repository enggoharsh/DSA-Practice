// #include <iostream>
// using namespace std;
// void patternP(int num){
//     for(int i =0;i<num;i++){
//     for (int j=0;j<num;j++){
//         cout<<"*";
//     }
//     cout<<"\n";
// }
// }
// int main(){ 
//     int n;
//     cout<<"Enter the number of lines: ";
//     cin>>n;
// patternP(n);
// return 0;
// }
//----------------------------------------------------------------------------------
//problem 2
#include <iostream>
using namespace std;
void patternP(int num){
    for(int i =0;i<num;i++){
    for (int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<"\n";
}
}
int main(){ 
    int n,t;
    cout<<"Enter the number of testcases: ";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"Enter the number of rows: ";
        cin>>n;
        patternP(n);

    }
    

return 0;
}
