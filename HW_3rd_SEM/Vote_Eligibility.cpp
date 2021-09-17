#include <iostream>
using namespace std;

class Vote_Eligibility
{
    int age;

    public:
        void verify_age();
};

void Vote_Eligibility :: verify_age()
{
    cout<< "Enter Your Age :  ";

    cin>> age;

    if(age < 18)
    {
        cout<< "You are Not Eligible!" << endl;
    }
    else if(age >=18)
    {
        cout<< "YES, you are Eligible for Vote.";
    }
}

int main()
{
    Vote_Eligibility obj;
    obj.verify_age();
}