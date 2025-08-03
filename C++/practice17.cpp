#include <iostream>
using namespace std;
int main(){
    int a=1 ,c=3;
    int *b=&a;
    cout << &b <<" and "<<&a<<" "<<&c;
    return 0;

}