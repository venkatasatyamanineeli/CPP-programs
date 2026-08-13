#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    void getData()
    {
        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Author: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nBook Details" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1, b2;

    cout << "Enter details of Book 1:" << endl;
    b1.getData();

    cout << "\nEnter details of Book 2:" << endl;
    b2.getData();

    cout << "\nDetails of Book 1:";
    b1.display();

    cout << "\nDetails of Book 2:";
    b2.display();

    return 0;
}
