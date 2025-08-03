#include <iostream>  //code with harry tut : 45;
using namespace std; // virtual base class
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
    }
    void get_roll_no()
    {
        cout << "Your roll no is : " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void getMarks()
    {
        cout << "Marks in physics is : " << physics << endl;
        cout << "Marks in Maths is : " << maths << endl;
        cout << "Percentage obtained : " << (maths + physics) / 2 << endl;
    }
};
class Sports : public virtual Student
{
protected:
    int score;

public:
    void setScore(float a)
    {
        score = a;
    }
    void getScore()
    {
        cout << "Your score is : " << score << endl;
    }
};
class Result : public Test, public Sports
{
public:
    void showRes()
    {
        cout << "HERE IS DESCRIPTION OF THE STUDENT: " << endl;
        get_roll_no(); // nesting these function
        getMarks();
        getScore();
    }
};

int main()
{
    int roll, score;
    float mathMarks, physicsMarks;
    cout << "Enter the roll no & Sports score of student : " << endl;
    cin >> roll >> score;
    cout << "Enter the marks in maths and physics respectively: " << endl;
    cin >> mathMarks >> physicsMarks;
    Result h;
    h.set_roll_no(roll);
    h.setMarks(mathMarks, physicsMarks);
    h.setScore(score);
    h.showRes();

    return 0;
}