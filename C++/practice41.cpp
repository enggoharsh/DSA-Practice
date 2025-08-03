#include <iostream>               //code with harry tut 40;
using namespace std;             //multilevel inheritance 
class Student{
    protected: 
    int roll_number;
    public: 
    void set_roll_number(int );
    void get_roll_number();
};
void Student :: set_roll_number(int a){
    roll_number=a;
}
void Student :: get_roll_number(){
    cout<<"the roll no of student is : "<<roll_number<<endl;
}
class Exam:public Student {
    protected: 
    float maths,physics;
    public: 
    void set_marks(float ,float);
    void get_marks();
};
void Exam:: set_marks(float a,float b){

    maths=a;
    physics=b;
}
void Exam :: get_marks(){
    cout<<"THESE ARE YOUR MARKS: "<<endl;
    cout<<" Marks in maths: "<<maths<<endl;
    cout<<"Marks in physics: "<<physics<<endl;
}
class Results :public Exam{
    float percentage;
    public: 
    void display();

};
void Results::display(){
   // get_roll_number();    ----->only when we are nesting these in display()
    //get_marks();
    cout<<"your percentage is: "<<(maths+physics)/2<<endl;
}
int main(){ 
    Results r;
    r.set_roll_number(27);
    r.get_roll_number();
    r.set_marks(95.0,96.0);
    r.get_marks();
    r.display();

return 0;
}