#include <iostream>
#include <string>
using namespace std;

class Library
{
public:

    // Nested class Book
    class Book
    {
        int bookId;
        string bookName;
        string authorName;
        float price;

    public:

        // Default constructor
        Book()
        {
            bookId = 0;
            bookName = "Unknown";
            authorName = "Unknown";
            price = 0;
        }

        // Parameterized constructor
        Book(int id, string name, string author, float p)
        {
            bookId = id;
            bookName = name;
            authorName = author;
            price = p;
        }

        // Display book details
        void display()
        {
            cout << "Book ID     : " << bookId << endl;
            cout << "Book Name   : " << bookName << endl;
            cout << "Author Name : " << authorName << endl;
            cout << "Price       : " << price << endl;
        }

        // Friend function
        friend void comparePrice(Book b1, Book b2);

        // Destructor
        ~Book()
        {
            cout << "Destructor called for Book ID: "
                 << bookId << endl;
        }
    };
};

// Friend function to compare prices
void comparePrice(Library::Book b1, Library::Book b2)
{
    cout << "\n===== PRICE COMPARISON =====" << endl;

    if (b1.price > b2.price)
    {
        cout << "First book is more expensive." << endl;
    }
    else if (b2.price > b1.price)
    {
        cout << "Second book is more expensive." << endl;
    }
    else
    {
        cout << "Both books have the same price." << endl;
    }
}

int main()
{
    // Using default constructor
    Library::Book book1;

    // Using parameterized constructor
    Library::Book book2(101, "C++ Programming", "Bjarne Stroustrup", 750);
    Library::Book book3(102, "Python Programming", "Guido van Rossum", 600);

    cout << "===== BOOK 1 =====" << endl;
    book2.display();

    cout << "\n===== BOOK 2 =====" << endl;
    book3.display();

    // Passing Book objects as parameters
    comparePrice(book2, book3);

    return 0;
}
