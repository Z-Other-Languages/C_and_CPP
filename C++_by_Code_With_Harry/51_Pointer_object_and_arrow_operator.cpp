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
    c.setData(4,22);
    c.getData();

    Complex *ptr = &c;
    (*ptr).setData(9, 10);
    (*ptr).getData();
//  both above and below pointer and arrow operator method are same.
    ptr->setData(3, 99);
    ptr->getData();


    //  ARRAY OF OBJECTS
    Complex *q = new Complex[4];
    q->setData(7, 49);
    q->getData();
    (q+1)->setData(9, 81);
    (q+1)->getData();
}