// binding on compile time

#include<iostream>
using namespace std;

class a
{
    public:
        virtual void show() = 0;
};

class b : public a
{
    public:
        void show()
        {
            cout<<"\nshow function is called in child class. \n";
        }
};

int main()
{
    a *p;
    b obj;

    p = &obj;

    // p->show();

    obj.show();

    return 0;
}