#include <iostream>
using namespace std;

// Nested namespaces
namespace University
{
    namespace Department
    {
        void display()
        {
            cout << "University: Aditya University" << endl;
            cout << "Department: Computer Science and Engineering (CSE)" << endl;
        }
    }
}

int main()
{
    // Accessing nested namespace
    University::Department::display();

    return 0;
}
