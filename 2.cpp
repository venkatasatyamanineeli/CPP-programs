#include <iostream>
using namespace std;

class Demo
{
public:
    static int count;
};

int Demo::count = 10;

int main()
{
    cout << "Static member = " << Demo::count << endl;
    return 0;
}
