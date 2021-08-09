#include <iostream>
using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout<< "Hello World." << endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout<< "Welcome to this Beautiful World." << endl;
        }
};

class Derived : public Base1, public Base2
{
    public:
    void greet(){
        Base1 :: greet();  // By adding these three lines you can remove ambiguity
    }
};

class C
{
    public:
        void play()
        {
            cout<< "Which Game Do you Like ?" << endl;
        }
};

class D
{
    public:
        void play()
        {
            cout<< "Which Subject Do you Like ?" << endl;
        }
};

int main()
{
    Base2 b;
    b.greet();

    Derived d;
    d.greet();  // This is Ambiguous Call

    D del;
    del.play();
    return 0;
}