#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
        void setData(int r, int i)
        {
            real = r;
            imaginary = i;
        }

        void getData()
        {
            cout<< endl << "Real Part : " << real << endl;
            cout<< "Imaginary Part : " << imaginary << endl << endl;
        }

};

int main()
{
    Complex c;
    c.setData(8, 20);
    c.getData();

    Complex *ptr = &c;
    (*ptr).setData(9, 18);
    (*ptr).getData();
    // both above and below pointer and arrow methods are same
    ptr->setData(5,25);
    ptr->getData();

    // ARRAY OF OBJECTS
    Complex *q = new Complex[4];
    q->setData(3,81);
    q->getData();

    (q+1)->setData(4,64);
    (q+1)->getData();

    (q+2)->setData(6,216);
    (q+2)->getData();
}