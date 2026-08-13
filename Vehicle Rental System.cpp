#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string vehicleName;
    int rentalCharge;

public:
    // Default Constructor
    Vehicle()
    {
        vehicleName = "Car";
        rentalCharge = 1000;
    }

    // Copy Constructor
    Vehicle(const Vehicle &v)
    {
        vehicleName = v.vehicleName;
        rentalCharge = v.rentalCharge;
    }

    // Friend Function
    friend void display(Vehicle original, Vehicle booked);
};

// Friend Function Definition
void display(Vehicle original, Vehicle booked)
{
    cout << "Original Vehicle Details" << endl;
    cout << "Vehicle Name : " << original.vehicleName << endl;
    cout << "Rental Charge: " << original.rentalCharge << endl;

    cout << "\nBooked Vehicle Details" << endl;
    cout << "Vehicle Name : " << booked.vehicleName << endl;
    cout << "Rental Charge: " << booked.rentalCharge << endl;
}

int main()
{
    // Original vehicle object
    Vehicle v1;

    // Copy constructor creates booking record
    Vehicle v2 = v1;

    // Display both objects
    display(v1, v2);

    return 0;
}
