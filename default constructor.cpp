#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
    int roll;
    string name;

   
    Student()
    {
        roll = 1;
        name = "Kamesh";
    }

    
    void display()
    {
        cout << "Roll = " << roll << endl;
        cout << "Name = " << name << endl;
    }
};

int main()
{
    
    Student s;

    
    s.display();

    return 0;
}
