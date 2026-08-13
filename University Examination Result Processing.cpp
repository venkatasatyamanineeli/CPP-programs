#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int mark1, mark2, mark3;

public:
    // Parameterized Constructor
    Student(int r, string n, int m1, int m2, int m3)
    {
        rollNo = r;
        name = n;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }

    // Friend Function
    friend void calculateResult(Student s);
};

void calculateResult(Student s)
{
    int total = s.mark1 + s.mark2 + s.mark3;
    float percentage = total / 3.0;
    char grade;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\nStudent Details" << endl;
    cout << "------------------------" << endl;
    cout << "Roll No     : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;
    cout << "Marks       : " << s.mark1 << " " 
         << s.mark2 << " " << s.mark3 << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
}

int main()
{
    int rollNo, m1, m2, m3;
    string name;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks in 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    Student s1(rollNo, name, m1, m2, m3);

    calculateResult(s1);

    return 0;
}
