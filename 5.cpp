#include <iostream>
using namespace std;

int x = 100;   // Global variable

class Test
{
public:
    static int value;

    void show();
};

int Test::value = 200;

void Test::show()
{
    cout << "Member function defined outside class" << endl;
}

int main()
{
    int x = 50;

    cout << "Local variable: " << x << endl;
    cout << "Global variable: " << ::x << endl;
    cout << "Static class member: " << Test::value << endl;

    Test t;
    t.show();

    return 0;
}
