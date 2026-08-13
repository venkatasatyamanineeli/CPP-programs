#include <iostream>

// Namespace declaration
namespace Demo
{
    void display()
    {
        std::cout << "Hello from Demo namespace!" << std::endl;
    }
}

using namespace std;

int main()
{
    // Using namespace directive
    cout << "Using namespace directive:" << endl;

    // Using namespace resolution operator
    Demo::display();

    return 0;
}
