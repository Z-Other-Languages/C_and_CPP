/*
    Also, refer to 24_static_data_member

    ✨ Note 2 :-
        When static member is created, there is only a single copy of the data member which is SHARED b/w all the objects of the Class.
        
        The data members are Not Static
        i,e. Every objects created has an individual copy of the data member and it is Not Shared.
*/

#include<iostream>
using namespace std;

class ignore{
    public:

        /*
        The data members are Not Static
        👇👇  i,e. Every objects created has an individual copy of the data member and it is Not Shared */
        int count = 0;

        void fun()
        {
            cout<< "Value of Count is : " << count << endl;
            
            count++;
        }
};


int main(){

    ignore obj_1, obj_2, obj_3;

    obj_1.fun();

    obj_2.fun();

    obj_3.fun();


    return 0;
}