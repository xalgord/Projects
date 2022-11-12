#include<iostream>
using namespace std;

int main()
{
    int total_days, years, weeks, days;
    cout << "Enter the number of Days: ";
    cin >> total_days;

    years = total_days / 365;
    weeks = (total_days%365)/7;
    days = total_days - (years*365 + weeks*7);

    cout << total_days << " = " << years << " years ," << weeks << " weeks ," << days << " days";
    return 0;
}