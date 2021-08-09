#include <iostream>
using namespace std;
/* 
Inheritance :-
    student --> test --> result
    student --> sports --> result
*/

class Student
{
    protected:
        int roll_no;
    public:
        void set_roll_number(int a=0)
        {
            roll_no = a;
        }
        void print_number(void)
        {
            cout<< "Roll Number is : " << roll_no << endl;
        }
};

class Test : virtual public Student
{
    protected:
        float math, physics;
    public:
        void set_marks(float m=33, float p=43)
        {
            math = m;
            physics = p;
        }
        void print_marks(void)
        {
            cout<< "Marks of" << endl
                << "    Math : " << math << endl
                << "    Physics : " << physics << endl;
        }
};

class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void set_score(float sc=40)
        {
            score = sc;
        }
        void print_score(void)
        {
            cout<< "Your PT Score is : " << score << endl;
        }
};

class Result : public Test, public Sports
{
    protected:
        float total;
    public:
        void display(void)
        {
            total = math + physics + score;
            print_number();
            print_score();
            print_marks();
            cout<< endl << "Total Marks is : " << total << endl
                << "Percentage : " << total/3 << endl;
        }
};

int main()
{
    Result r;
    r.set_roll_number(12);
    r.set_score(70);
    r.set_marks(80, 75);
    r.display();
    return 0;
}