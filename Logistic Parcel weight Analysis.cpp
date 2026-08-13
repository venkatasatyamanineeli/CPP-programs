#include <iostream>
#include <string>
using namespace std;

class Parcel
{
private:
    int parcelID;
    string senderName;
    float weight;

public:
    // Parameterized Constructor
    Parcel(int id, string name, float w)
    {
        parcelID = id;
        senderName = name;
        weight = w;
    }

    // Friend Function Declaration
    friend void compareWeight(Parcel p1, Parcel p2);
};

// Friend Function Definition
void compareWeight(Parcel p1, Parcel p2)
{
    cout << "\nParcel Details\n";
    cout << "Parcel 1 Weight: " << p1.weight << " kg" << endl;
    cout << "Parcel 2 Weight: " << p2.weight << " kg" << endl;

    if (p1.weight > p2.weight)
    {
        cout << "Parcel 1 is heavier." << endl;
    }
    else if (p2.weight > p1.weight)
    {
        cout << "Parcel 2 is heavier." << endl;
    }
    else
    {
        cout << "Both parcels have the same weight." << endl;
    }
}

int main()
{
    int id1, id2;
    string name1, name2;
    float w1, w2;

    cout << "Enter Parcel 1 ID: ";
    cin >> id1;
    cin.ignore();
    cout << "Enter Sender Name: ";
    getline(cin, name1);
    cout << "Enter Weight (kg): ";
    cin >> w1;

    cout << "\nEnter Parcel 2 ID: ";
    cin >> id2;
    cin.ignore();
    cout << "Enter Sender Name: ";
    getline(cin, name2);
    cout << "Enter Weight (kg): ";
    cin >> w2;

    // Creating objects using parameterized constructor
    Parcel p1(id1, name1, w1);
    Parcel p2(id2, name2, w2);

    // Calling friend function
    compareWeight(p1, p2);

    return 0;
}
