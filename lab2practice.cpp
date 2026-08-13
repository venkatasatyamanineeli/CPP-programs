#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int empId;
    string name;
    float basicSalary;
    float allowances;

public:

    // Constructor
    Employee(int id, string n, float basic, float allow)
    {
        empId = id;
        name = n;
        basicSalary = basic;
        allowances = allow;
    }

    // Calculate Gross Salary
    float grossSalary()
    {
        return basicSalary + allowances;
    }

    // Display employee details
    void display()
    {
        cout << "Employee ID   : " << empId << endl;
        cout << "Name          : " << name << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Allowances    : " << allowances << endl;
        cout << "Gross Salary  : " << grossSalary() << endl;
    }

    // Friend function declaration
    friend void compareSalary(Employee e1, Employee e2);

    // Destructor
    ~Employee()
    {
        cout << "Destructor called for Employee ID: "
             << empId << endl;
    }
};

// Friend function to compare salaries
void compareSalary(Employee e1, Employee e2)
{
    if (e1.grossSalary() > e2.grossSalary())
    {
        cout << e1.name << " has a higher salary." << endl;
    }
    else if (e2.grossSalary() > e1.grossSalary())
    {
        cout << e2.name << " has a higher salary." << endl;
    }
    else
    {
        cout << "Both employees have the same salary." << endl;
    }
}

int main()
{
    // Creating employee objects
    Employee e1(101, "Ravi", 30000, 5000);
    Employee e2(102, "Priya", 35000, 4000);

    cout << "===== EMPLOYEE 1 =====" << endl;
    e1.display();

    cout << "\n===== EMPLOYEE 2 =====" << endl;
    e2.display();

    cout << "\n===== SALARY COMPARISON =====" << endl;

    // Passing objects as parameters
    compareSalary(e1, e2);

    return 0;
}
