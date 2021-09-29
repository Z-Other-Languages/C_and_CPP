// Also, refer to 24_static_data_member

#include<iostream>
using namespace std;

class abc{
    public:
    static int count;

};

int abc :: count;

int main(){

    abc obj_1, obj_2, obj_3;
    
    cout<< "Value of count is : " << obj_1.count;

    cout<< "\nEnter the Value of count for object 1 : ";
    cin >> obj_1.count;

    cout<< "Value of count for obj_1 is : " << obj_1.count;

    cout<< "\nValue of count for obj_2 is : " << obj_2.count;

    cout<< "\nValue of count for obj_3 is : " << obj_3.count;


    return 0;
}