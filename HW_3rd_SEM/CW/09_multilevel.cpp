#include <iostream>

using namespace std;


class College{

    public : 

    void college_name()
    {
        cout<< "\nLNCT & Science" << endl;
    }
};

class Student : public College{

    public :

    void student_name()
    {
        cout<< "Name of the Student : Ayush Kr." <<endl;
    }
};

class Marks : public Student{

    public :

    void show_marks()
    {
        cout<< "Marks obtained : 90 out of 100 \n\n";
    }
};

int main()
{
    Marks obj;

    obj.college_name();

    obj.student_name();

    obj.show_marks();
    
    return 0;
}