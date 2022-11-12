#include<iostream>
using namespace std;

int main()
{
    int amount, notes;
    int arr[7] = {500, 200, 100, 50, 20, 10, 5};
    int notes_count[7] = {0};

    cout << "\nProgram to Count Number of Currency Notes for Dispense in any ATM\n";

    cout << "\nEnter the amount: ";
    cin >> amount;

    if(amount%5 != 0)
    {
        cout << "Please Enter a amount with 0 digit in the last.";
    }
    else{
        for(int i=0; i<7; i++)
        {
            if(amount >= arr[i])
            {
                notes_count[i] = amount / arr[i];
                amount = amount % arr[i];
            }
        }

        cout << "\nNumber of Dispensed Notes are:" << endl;
        for(int i=0; i<7; i++)
        {
            if(notes_count[i] != 0)
            {
                cout << arr[i] << " = " << notes_count[i] << " notes" << endl;   
            }
        }
    }   
    return 0;
}