#include <iostream>
using namespace std;

class Length
{
public:
    int num;
    double result, meter, feet;

    double Feet()
    {
        cout << "How much Feets: ";
        cin >> feet;
        return feet / 3.2808399;
    }

    double Meter()
    {
        cout << "How much Meters: ";
        cin >> meter;
        return meter * 3.2808399;
    }
};

int main()
{
    Length obj1;

    cout << "Convert Feet to Meter or Meter to Feet.";
    cout << "\n1. Feet to Meter.";
    cout << "\n2. Meter to Feet.";
    cout << "\n\nEnter your choice: ";
    cin >> obj1.num;

    if (obj1.num == 1)
    {
        obj1.result = obj1.Feet();
        cout << obj1.feet << " feets = " << obj1.result << " meters";
    }
    else
    {
        obj1.result = obj1.Meter();
        cout << obj1.meter << " meters = " << obj1.result << " feets";
    }
    return 0;
}