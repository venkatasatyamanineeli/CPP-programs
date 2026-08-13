#include <iostream>
using namespace std;


namespace MathOperations
{
    void addition(int a, int b)
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtraction(int a, int b)
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiplication(int a, int b)
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void division(int a, int b)
    {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not possible." << endl;
    }
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    MathOperations::addition(a, b);
    MathOperations::subtraction(a, b);
    MathOperations::multiplication(a, b);
    MathOperations::division(a, b);

    return 0;
}
