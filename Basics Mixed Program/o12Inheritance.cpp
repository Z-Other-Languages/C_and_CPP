// Single Level inheritance
#include<iostream>
using namespace std;

class vehicle{
    public:
        int mileage=25;
        int cost=500;

        void put_vehicle_detail(){
            cout<< "I am a vehicle";
            cout<<"\nMileage of Vehicle is : "<< mileage;
            cout<<"\nCost of Vehicle is : "<< cost;
        }
};


// here car inherit the property of the vehicle
class car : public vehicle{
    public:
        string color = "blue";
        int tyres = 4;

        void show_car_details(){
            cout<< "\n\nI am a car";
            cout<< "\nColor of car is : " << color;
            cout<< "\nNumber of tyres in car are "<< tyres;
        }
};

int main(){

    // here car is child class so that it access details of parent class also
    car c1; 
    c1.put_vehicle_detail();
    c1.show_car_details();
    return 0;
}

  