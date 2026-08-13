#include <iostream>
using namespace std;

// Namespace Engineering
namespace Engineering
{
    void course()
    {
        cout << "Engineering Course: Computer Science Engineering (CSE)" << endl;
    }
}

// Namespace Medical
namespace Medical
{
    void course()
    {
        cout << "Medical Course: MBBS" << endl;
    }
}

int main()
{
    // Accessing functions using namespace resolution
    Engineering::course();
    Medical::course();

    return 0;
}
