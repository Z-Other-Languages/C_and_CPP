/*
    Also, refer to 24_static_data_member

    ✨ Note 2 :-
        When static member is created, there is only a single copy of the data member which is SHARED b/w all the objects of the Class.
        
        The data members are Not Static
        i,e. Every objects created has an individual copy of the data member and it is Not Shared.
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;

    /*
        ✅ When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods. Static methods can only be accessed using the scope resolution operator.
        👇👇                             */
    static int count;

    public:
        void setData(void)
        {
            cout<< "Enter the ID : ";
            cin>> id;
            count++;
        }
        void getData(void)
        {
            cout<< "The ID of the Employee is : "<< id << " and its Employee No is : " << count<< endl;
        }

        static void getCount(void){
            cout<< "The value of Count is : " << count << endl;
        }

};

/*
        💊
        When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods. Static methods can only be accessed using the scope resolution operator.
        👇👇 
*/
int Employee :: count;  // Default value is 0

int main()
{
    Employee a,b,c;

    // a.count=1; // cannot do this as id and count are private

    a.setData();
    a.getData();
    a.getCount();
    
    b.setData();
    b.getData();
    b.getCount();
    
    c.setData();
    c.getData();
    c.getCount();
    
    return 0;
}