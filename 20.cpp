#include <iostream>
#include <string>
using namespace std;

class Result
{
private:
    string name;
    int m1, m2, m3;
    int total;
    float average;
    char grade;

public:
    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks in 3 Subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate()
    {
        total = m1 + m2 + m3;
        average = total / 3.0;

        if (average >= 90)
            grade = 'A';
        else if (average >= 75)
            grade = 'B';
        else if (average >= 60)
            grade = 'C';
        else if (average >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\nStudent Name : " << name << endl;
        cout << "Total Marks  : " << total << endl;
        cout << "Average      : " << average << endl;
        cout << "Grade        : " << grade << endl;
    }
};

int main()
{
    int n;
    cout << "Enter Number of Students: ";
    cin >> n;

    Result students[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << ":" << endl;
        students[i].getData();
        students[i].calculate();
    }

    cout << "\n----- Student Report -----" << endl;

    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    return 0;
}
