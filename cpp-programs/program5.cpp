#include<iostream>
using namespace std;

int main()
{
    char user_input;
    cout << "Input a Character, Symbol or a Number: ";
    cin >> user_input;
    if(user_input >= 48 && user_input <= 57)
    {
        cout << "Given Input is a Number.";
    }
    else if ((user_input >= 65 && user_input <= 90) || (user_input >= 97 && user_input <= 122))
    {
        cout << "Given Input is a Character.";
    }
    else
    {
        cout << "Given Input is a Symbol.";
    }    
    return 0;
}