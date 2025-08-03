#include <iostream>                 // code with harry tut 23 -->objects memory allocation
using namespace std;                      //using arrays******

class shop{
                                          // no need to declare private members they will be intialise auto.
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(){counter=0;}            // for countig 
    void setPrice();                     // for setting the price
    void displayPrice();                 // for displaying price and item no


    
};
void shop :: setPrice(){
    cout<<"Enter the item ID  of item number "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the item price of item number "<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<" item Id  " <<itemId[i]<<" is of price "<<itemPrice[i]<<endl;
      }  
}
int main(){ 
shop dukaan;
dukaan.initcounter();
dukaan.setPrice();
dukaan.setPrice();
dukaan.setPrice();
dukaan.displayPrice();
return 0;
}