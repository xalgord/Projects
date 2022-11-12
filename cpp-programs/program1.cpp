#include<iostream>
using namespace std;

double meter, feet;

double Feet();
double Meter();

double Feet()
{
    cout<<"How much Feets: ";
    cin>>feet;
    return feet/3.2808399;
}

double Meter()
{
    cout<<"How much Meters: ";
    cin>>meter;
    return meter*3.2808399;
}

int main()
{
    int num;
    double result;

    cout << "Convert Feet to Meter or Meter to Feet.";
    cout << "\n1. Feet to Meter.";
    cout << "\n2. Meter to Feet.";
    cout << "\n\nEnter your choice: ";
    cin >> num;

    if(num == 1)
    {
        result = Feet();
        cout << feet << " feets = " << result << " meters";
    }
    else
    {
        result = Meter();
        cout << meter << " meters = " << result << " feets";
    }
    return 0;
}