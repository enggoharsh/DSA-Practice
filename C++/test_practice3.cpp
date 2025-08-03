#include <iostream>
#include<fstream>
using namespace std;
int main(){ 
    string st;
ifstream out("sample.txt");
out>>st;
cout<<st;
out.close();
ofstream in("Sample.txt");
in<<st;
cin>>st;
in.close();

return 0;
}