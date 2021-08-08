/* Class template with multiple parameter

    template<class T1, class T2, class T3, ...>
    class nameOfclass{
        body
    }
*/


#include<iostream>
using namespace std;

template<class T1=float, class T2=char, class T3=int>
class Ayush{
    public:
        T1 data1;
        T2 data2;
        T3 data3;

        Ayush(T1 a, T2 b, T3 c){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void display(){
            cout<< this->data1 << endl << this->data2 << endl << this->data3 <<endl;
        }
};

int main(){
    // Ayush<> obj(1.46, 'A', 99);  // default parameter will be passed if data type not mentioned
    
    Ayush<char, float, float> obj('A', 2.6, 9.974);
    
    obj.display();

}