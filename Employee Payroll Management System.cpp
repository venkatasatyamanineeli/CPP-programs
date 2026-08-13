#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empID;
    string name;
    float basicSalary;

public:
    // Parameterized Constructor
    Employee(int id, string n, float salary)
    {
        empID = id;
        name = n;
        basicSalary = salary;
    }

    // Friend Function Declaration
    friend void calculateSalary(Employee emp);
};

// Friend Function Definition
void calculateSalary(Employee emp)
{
    float hra = 0.20 * emp.basicSalary;
    float da = 0.10 * emp.basicSalary;
    float netSalary = emp.basicSalary + hra + da;

    cout << "\nEmployee Details" << endl;
    cout << "------------------------" << endl;
    cout << "Employee ID   : " << emp.empID << endl;
    cout << "Employee Name : " << emp.name << endl;
    cout << "Basic Salary  : " << emp.basicSalary << endl;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "Net Salary    : " << netSalary << endl;
}

int main()
{
    int id;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> salary;

    // Object created using Parameterized Constructor
    Employee emp(id, name, salary);

    // Calling Friend Function
    calculateSalary(emp);

    return 0;
}
