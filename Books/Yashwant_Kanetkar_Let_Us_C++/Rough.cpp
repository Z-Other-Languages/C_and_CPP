#include <iostream>
using namespace std;
//*-*76r3d12wqza
class Base
{
public:
    virtual void display()
    {
        cout << "\n\nParent Class is Called.";
    }
};

class Derive : public Base
{
public:
    void display()
    {
        cout<< "Derive Class.";
    }
};

void driver_code()
{
    Base *ptr;
    Base obj;
    ptr = &obj;
    ptr->display();
    obj.display();
}

void driver_2()
{
    // Using reference creating Base class objects
    Derive der_obj;

    Base &ref_Baseobj = der_obj;
    // ref_Baseobj = der_obj;
    ref_Baseobj.display();
}

int main()
{

    driver_code();

    return 0;
}