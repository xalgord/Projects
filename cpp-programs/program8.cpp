#include<iostream>
using namespace std;

int main()
{
    int num,s=0, counter=0, arr[30] = {1};
    cout << "Program to convert decimal to Binary." << endl;
    cout << "\nEnter a number: ";
    cin >> num;

    for(int i=num; i>0; i/=2)
    {
        s = i%2;
        arr[counter] = s;
        counter++;
    }
    for(int i=counter-1; i>=0; i--)
    {
        cout << arr[i];
    }
}