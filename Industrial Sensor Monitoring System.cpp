#include <iostream>
using namespace std;

class Sensor
{
private:
    float temperature;
    float pressure;

public:
    // Parameterized Constructor
    Sensor(float t, float p)
    {
        temperature = t;
        pressure = p;
    }

    // Copy Constructor
    Sensor(const Sensor &s)
    {
        temperature = s.temperature;
        pressure = s.pressure;
    }

    // Friend Function
    friend void compareSensors(Sensor s1, Sensor s2);
};

// Friend Function Definition
void compareSensors(Sensor s1, Sensor s2)
{
    cout << "Sensor 1 Reading" << endl;
    cout << "Temperature: " << s1.temperature << " °C" << endl;
    cout << "Pressure   : " << s1.pressure << " Pa" << endl;

    cout << "\nSensor 2 Reading" << endl;
    cout << "Temperature: " << s2.temperature << " °C" << endl;
    cout << "Pressure   : " << s2.pressure << " Pa" << endl;

    if (s2.temperature > 100 || s2.pressure > 200)
        cout << "\nMaintenance Required! Abnormal Sensor Reading Detected." << endl;
    else
        cout << "\nSensor Readings are Normal." << endl;
}

int main()
{
    // Parameterized Constructor
    Sensor currentReading(80, 150);

    // Copy Constructor (Historical Record)
    Sensor history(currentReading);

    // Compare both readings
    compareSensors(currentReading, history);

    return 0;
}
