#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int id;
    string name;

public:
    Patient(int i, string n)
    {
        id = i;
        name = n;
    }

    // Copy Constructor
    Patient(Patient &p)
    {
        id = p.id;
        name = p.name;
    }

    friend void compare(Patient, Patient);
};

void compare(Patient p1, Patient p2)
{
    if (p1.id == p2.id && p1.name == p2.name)
        cout << "Both patient records are the same." << endl;
    else
        cout << "Patient records are different." << endl;
}

int main()
{
    Patient p1(101, "Ravi");
    Patient p2 = p1;

    compare(p1, p2);

    return 0;
}
