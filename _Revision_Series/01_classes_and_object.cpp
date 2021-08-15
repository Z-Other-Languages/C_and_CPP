#include<iostream>
using namespace std;

class complex_num
{
    public:
        int x,y, z;

        void get_num(int n1, int n2)
        {
            x = n1;
            y = n2;

            display_complex();
        }

        void display_complex()
        {
            cout<< "Complex Number is : "<< x << " + " << y << "i" << endl; 
        }

        void sum_complex(complex_num o1, complex_num o2)
        {
            cout<< "Sum is : " << o1.x + o2.x << " + " << o1.y + o2.y << "i" << endl;
        }
};

int main()
{
    complex_num o1, o2, o3;

    o1.get_num(2, 6);
    o2.get_num(5, 3);
    
    o3.sum_complex(o1, o2);
}