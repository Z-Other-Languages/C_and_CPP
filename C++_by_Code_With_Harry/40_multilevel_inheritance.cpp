// MULTI LEVEL INHERITANCE
/*
    
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student :: set_roll_number(int r)
{
    roll_number = r;
}

void Student :: get_roll_number()
{
    cout << "Roll Number is : " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float math, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m, float p)
{
    math = m;
    physics = p;
}

void Exam :: get_marks()
{
    cout << "Marks of " << endl
         << "   Math is : " << math << endl
         << "   Physics is : "<< physics
         << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        cout << "Percentage Aggregated : " << (math + physics) / 2 << endl;
    }
};

int
main()
{
    Result r;
    r.set_roll_number(115);
    r.get_roll_number();
    r.set_marks(80, 95);
    r.get_marks();
    r.display_result();
    return 0;
}