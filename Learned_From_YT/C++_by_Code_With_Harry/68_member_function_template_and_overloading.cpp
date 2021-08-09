// Member function template and overloading template function 

#include<iostream>
using namespace std;

template <class T>
class Ayush{
    public:
        T data;
        Ayush(T a){
            data = a;
        }
        void display();
};

template<class T>
void Ayush<T> :: display(){
    cout << "The Value Stored in data : " << data << endl;
}

// Normal Function Example is below
void func(int a){
    cout<< "The Value of a : " << a << endl;
}

// Template Function is below
template<class T>
void func(T a){
    cout<< "Using Template Function, the value of a : " << a << endl;
}

int main(){
    // Ayush<float> obj(4.32);
    // Ayush<char> obj('A');
    // Ayush<int> obj(101);
    // obj.display();

    func(55);
    func<float>(44.5);
    func(468.5);
    func('A');  // wow compiler IQ automatically observe the data type, no need to mention

    
}