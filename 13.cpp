#include <iostream>
using namespace std;

// Long namespace name
namespace VeryLongNamespaceName
{
    void display()
    {
        cout << "Namespace alias example." << endl;
    }
}

// Creating an alias
namespace VLN = VeryLongNamespaceName;

int main()
{
    // Accessing function through alias
    VLN::display();

    return 0;
}
