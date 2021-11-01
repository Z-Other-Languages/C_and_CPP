/*
    Creating pointer of the Base Class
    a obj;
    a *p;

    p = &obj_a;   // This is simple it will run. ✅
    p = &obj_b
    👆 This is Possible bcoz p & obj both are of same type(class A).
    Expln. ->   Pointer of Parent class can store objects of both Parents & Child class.

   */
#include<iostream>
using namespace std;

class a
{
    public:
        // void in()        // Compile Time Binding
        virtual void in()   // Run Time Binding
        {
            cout<< "\nBase Class is called. \n\n";
        }
};

class b : public a
{
    public:
        void in()
        {
            cout<< "\nDerived Class is called. \n\n";
        }
};

int main(){
    a obj_a;
    b obj_b;

    a *ptr_a;

    ptr_a = &obj_a;
    ptr_a->in();    // Simply Base class in function will be called. (Compile Time Binding)


    ptr_a = &obj_b; // You will think that Child class will be called.🤕 But again Base class function will be called. (🤷‍♀️ Drawback ❔ )
    ptr_a->in();    

    /* 💊💊 
        To overcome this drawback we will use ✨ Run Time Binding (Virtual keyword)
            
        ✔ add virtural keyword in the Base Class function
    */ 

    return 0;
}