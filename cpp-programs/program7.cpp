#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float amount, time, rate, compound_interest, principal;
    cout << "Program to Calculate the Compound Interest." << endl;

    cout << "\nEnter Amount, Time, and Rate of Interest: ";
    cin >> amount >> time >> rate;

    compound_interest = amount*pow((1+rate/100),time);

    cout << "Compounded Interest = " << compound_interest;

    return 0;
}