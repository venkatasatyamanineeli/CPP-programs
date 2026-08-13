#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    void getData();
    void calculateArea();
};

// Function definition outside the class
void Rectangle::getData()
{
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

// Function definition outside the class
void Rectangle::calculateArea()
{
    float area = length * width;
    cout << "Area of Rectangle = " << area << endl;
}

int main()
{
    Rectangle r;
    r.getData();
    r.calculateArea();

    return 0;
}
