/*
                     Vehicle
            (speed, maintenance, value)
        ________________|_______________________
        |                     |                 |
    fourwheeler         twowheeler          airborne
  (speed, maint)    (speed, maint, value)   (speed)
*/

#include <iostream>
using namespace std;

class Vehicle // This is Parent class (with three child class)
{
public:
    virtual void speed()
    {
        cout << endl
             << "Vehile -> Speed";
    }

    virtual void maintenance()
    {
        cout << endl
             << "Vehicle -> Maintenance";
    }

    void value()
    {
        cout << endl
             << "Vehicle -> Value \n";
    }
};

class Fourwheeler : public Vehicle
{
public:
    void speed()
    {
        cout << endl
             << "Fourwheeler -> speed";
    }

    void maintenance()
    {
        cout << endl
             << "Fourwheeler -> manintenance \n";
    }
};

class Twowheeler : public Vehicle
{
public:
    void speed()
    {
        cout << endl
             << "Twowheeler -> speed";
    }

    void maintenance()
    {
        cout << endl
             << "Twowheeler -> maintenance";
    }

    void value()
    {
        cout << endl
             << "Twowheeler -> value \n";
    }
};

class Airborne : public Vehicle
{
public:
    void speed()
    {
        cout << endl
             << "Airborne -> speed \n";
    }
};

int main()
{
    Vehicle *ptr_vehicle_1;
    Vehicle obj_veh;

    ptr_vehicle_1 = &obj_veh;
    ptr_vehicle_1->speed();
    ptr_vehicle_1->maintenance();
    ptr_vehicle_1->value();

    Vehicle *ptr_vehicle_2;
    Vehicle *ptr_vehicle_3;
    Vehicle *ptr_vehicle_4;

    Fourwheeler maruti;
    Twowheeler pulsar;
    Airborne jumbo;

    ptr_vehicle_2 = &maruti;
    ptr_vehicle_3 = &pulsar;
    ptr_vehicle_4 = &jumbo;

    ptr_vehicle_2->speed();
    ptr_vehicle_2->maintenance();

    ptr_vehicle_2->value();
    // 👆  Since value() is not Virtual, irrespective of the whether the base class object's or derived class object's address is stored in ptr(of Base class) it is always the base class's value() that would get called.


    ptr_vehicle_3->speed();
    ptr_vehicle_3->maintenance();
    ptr_vehicle_3->value();
    
    ptr_vehicle_4->speed();
    ptr_vehicle_4->maintenance();   // ⚡⚡

    
    // Calling in Simple way 👇👇
    Vehicle v_obj;
    v_obj.speed();

    Fourwheeler f_obj;
    f_obj.speed();

    Airborne a_obj;
    a_obj.maintenance();
    //✨👆 Agar child class me maintenance() function available hi nhi hai then its Parent class virtual maintenance function will be called. 🙌🙌 
    return 0;
}