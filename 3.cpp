#include <iostream>
using namespace std;

class Sample
{
    int num;

public:
    void getData();
    void display();
};

void Sample::getData()
{
    cout << "Enter number: ";
    cin >> num;
}

void Sample::display()
{
    cout << "Number = " << num << endl;
}

int main()
{
    Sample s;
    s.getData();
    s.display();

    return 0;
}
