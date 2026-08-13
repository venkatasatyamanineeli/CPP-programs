#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks;

public:
    void getData();
    void display();
};

void Student::getData()
{
    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::display()
{
    cout << "\nStudent ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    Student s;
    s.getData();
    s.display();

    return 0;
}
