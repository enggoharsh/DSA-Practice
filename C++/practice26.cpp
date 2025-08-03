#include <iostream> 
#include <string>                   // code with harry tut 22
using namespace std;

class binary
{ //private:
    string s;
   //  void chk_bin();               //-------> cant be accessed by driver or main ()
    public:
    void read(void);
    void chk_bin(void);
    void ones();
    void display();

};

void binary :: read(void){
    cout<<"Enter the binary number: ";
    cin>>s;
}
void binary :: chk_bin(void){
   for(int i=0;i<s.length();i++){                         // variable.length()--->to find length of string
    if(s.at(i)!='0' && s.at(i)!='1'){ 
          cout<<"please enter correct binary number."<<endl;                              // to check each element of string s-
         exit(0);
       }
       
    }
   } 

void binary :: ones(){                                            //1's complement of any number:
    for (int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    cout<<endl;
}

void binary :: display(){
    //chk_bin();                                          //  -----> nesting of chk bin inside display()
    cout<<"displaying your binary number: "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main(){ 
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();

return 0;
}