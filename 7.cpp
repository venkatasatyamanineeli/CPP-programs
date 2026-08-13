#include <iostream>
using namespace std;

// Creating a namespace
namespace College
{
    void displayCollege()
    {
        cout << "Welcome to Aditya University!" << endl;
    }
}

int main()
{
    // Accessing the function using scope resolution operator
    College::displayCollege();

    return 0;
}
