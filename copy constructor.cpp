#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
 Student(int r)
    {
        roll = r;
    }

    
    Student(Student &obj)
    {
        roll = obj.roll;
    }

 
    void display()
    {
        cout << "Roll = " << roll << endl;
    }
};

int main()
{
    
    Student s1(101);

    
    Student s2 = s1;

    cout << "In Object 1 :" << endl;
    s1.display();

    cout << "In Object 2 :" << endl;
    s2.display();

    return 0;
}
