#include<iostream>
using namespace std;

class a
{
    public:
        virtual void show() = 0;
};

// class b  ✅
class b : public a
{
    public:
        // void show() ✅
        virtual void show()
        {
            cout<<"\nshow function is called in child class. \n";
        }
};

int main()
{
    b obj;
    obj.show();

    return 0;
}