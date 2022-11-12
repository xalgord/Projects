#include<iostream>
using namespace std;

double Fahren_heit, Cel_sius;

double Celsius();
double Fahrenheit();

double Celsius()
{
    cout<<"How much Celsius: ";
    cin>>Cel_sius;
    return (Cel_sius*9/5) + 32;
}

double Fahrenheit()
{
    cout<<"How much Fahrenheits: ";
    cin>>Fahren_heit;
    return ((Fahren_heit-32)*5)/9;
}

int main()
{
    int num;
    double result;

    cout << "Convert Celsius to Fahrenheit or Fahrenheit to Celsius.";
    cout << "\n1. Celsius to Fahrenheit.";
    cout << "\n2. Fahrenheit to Celsius.";
    cout << "\n\nEnter your choice: ";
    cin >> num;

    if(num == 1)
    {
        result = Celsius();
        cout << Cel_sius << " Celsius = " << result << " Fahrenheits";
    }
    else
    {
        result = Fahrenheit();
        cout << Fahren_heit << " Fahrenheits = " << result << " Celsius";
    }
    return 0;
}