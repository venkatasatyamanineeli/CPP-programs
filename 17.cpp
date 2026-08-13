#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    void getData()
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }

    void area()
    {
        cout << "Area = " << 3.14 * radius * radius << endl;
    }

    void circumference()
    {
        cout << "Circumference = " << 2 * 3.14 * radius << endl;
    }
};

int main()
{
    Circle c;

    c.getData();
    c.area();
    c.circumference();

    return 0;
}
