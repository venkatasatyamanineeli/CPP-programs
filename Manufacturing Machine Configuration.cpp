#include <iostream>
#include <string>
using namespace std;

class Machine
{
private:
    int machineID;
    string machineName;
    int configValue;

public:
    // Parameterized Constructor
    Machine(int id, string name, int config)
    {
        machineID = id;
        machineName = name;
        configValue = config;
    }

    // Copy Constructor
    Machine(const Machine &m)
    {
        machineID = m.machineID;
        machineName = m.machineName;
        configValue = m.configValue;
    }

    // Friend Function Declaration
    friend void display(Machine m1, Machine m2);
};

// Friend Function Definition
void display(Machine m1, Machine m2)
{
    cout << "\nOriginal Machine Configuration\n";
    cout << "Machine ID      : " << m1.machineID << endl;
    cout << "Machine Name    : " << m1.machineName << endl;
    cout << "Configuration   : " << m1.configValue << endl;

    cout << "\nBackup Machine Configuration\n";
    cout << "Machine ID      : " << m2.machineID << endl;
    cout << "Machine Name    : " << m2.machineName << endl;
    cout << "Configuration   : " << m2.configValue << endl;
}

int main()
{
    int id, config;
    string name;

    cout << "Enter Machine ID: ";
    cin >> id;

    cin.ignore();
    cout << "Enter Machine Name: ";
    getline(cin, name);

    cout << "Enter Configuration Value: ";
    cin >> config;

    // Original object using parameterized constructor
    Machine m1(id, name, config);

    // Backup object using copy constructor
    Machine m2 = m1;

    // Display both objects
    display(m1, m2);

    return 0;
}
