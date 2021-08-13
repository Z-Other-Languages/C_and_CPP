#include<iostream>
using namespace std;

class Employee
{
    
    private:
        int a, b, c;

    public:
        int d, e, f;

        void setData(int a, int b, int c);

        void getData(){
            cout<< "Value of a : " << a << endl;
            cout<< "Value of b : " << b << endl;
            cout<< "Value of d : " << d << endl;
            cout<< "Value of e : " << e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee ayush;

    ayush.d = 89;
    ayush.e = 99;

    ayush.setData(2, 8, 16);
    ayush.getData();

}