#include<iostream>
using namespace std;

int main()
{
    int discount=0, quantity, price, total_expense;
    
    cout << "Enter total quantity: ";
    cin >> quantity;

    cout << "Enter price of the product: ";
    cin >> price;

    total_expense = price*quantity;

    if(total_expense > 2500)
    {
        discount = total_expense * 10 / 100;
        cout << "\nPayable Amount = " << total_expense - discount;
        cout << "\nDiscount = " << discount;
    }
    else
    {
        cout << "\nPayable Amount = " << total_expense - discount;
    }
}