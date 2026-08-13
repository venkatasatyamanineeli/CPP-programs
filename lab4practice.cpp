#include <iostream>
#include <string>
using namespace std;

class University
{
    string universityName;
    string location;

public:

    // Constructor for University
    University(string name, string loc)
    {
        universityName = name;
        location = loc;
    }

    // Nested class Student
    class Student
    {
        int rollNo;
        string name;
        string branch;

    public:

        // Default constructor
        Student()
        {
            rollNo = 0;
            name = "Unknown";
            branch = "Unknown";
        }

        // Parameterized constructor
        Student(int r, string n, string b)
        {
            rollNo = r;
            name = n;
            branch = b;
        }

        // Display student details
        void displayStudent()
        {
            cout << "Roll Number : " << rollNo << endl;
            cout << "Name        : " << name << endl;
            cout << "Branch      : " << branch << endl;
        }
    };

    // Display university details
    void displayUniversity()
    {
        cout << "University Name : " << universityName << endl;
        cout << "Location        : " << location << endl;
    }
};

int main()
{
    // Create University object
    University university("Aditya University", "Surampalem");

    // Array of Student objects
    University::Student students[5] =
    {
        University::Student(101, "Ravi", "CSE"),
        University::Student(102, "Priya", "AIML"),
        University::Student(103, "Anu", "ECE"),
        University::Student(104, "Kiran", "CSE"),
        University::Student(105, "Divya", "AIML")
    };

    // Display University information
    cout << "===== UNIVERSITY INFORMATION =====" << endl;
    university.displayUniversity();

    // Display Student information
    cout << "\n===== STUDENT INFORMATION =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].displayStudent();
    }

    return 0;
}
