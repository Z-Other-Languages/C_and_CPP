/* Class template with multiple parameter

    template<class T1, class T2, class T3, ...>
    class nameOfclass{
        body
    }
*/


#include<iostream>
using namespace std;

template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<< this->data1 << endl << this->data2 << endl;
        }
};

int main(){
    // myClass<int, char> obj(5, 'y');
    myClass<float, char> obj(1.960, 'C');
    obj.display();

}