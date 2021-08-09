#include <iostream>
using namespace std;

class Student{
    int a;
    public:
        Student& setData(int a)
        // void setData(int a)
        {
            this->a = a;
            return *this;
        }

        void getData(){
            cout<< "Value of a : " << a << endl;
        }
};

int main()
{
    Student s;
    s.setData(77);
    s.getData();
}