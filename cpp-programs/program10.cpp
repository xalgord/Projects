#include <iostream>
using namespace std;

class Discount
{
private:
    int quantity, discount = 0, price, total_expense;

public:
    int q, p;
    void Calculate(int q, int p)
    {
        quantity = q;
        price = p;
        total_expense = quantity * price;
        if (total_expense > 2500)
        {
            discount = total_expense * 10 / 100;
            cout << "Total Payable Amount = " << total_expense - discount << endl;
            cout << "Discount = " << discount;
        }
        else
        {
            cout << "Total Payable Amount = " << total_expense - discount;
        }
    }
};

int main()
{
    Discount obj1;
    cout << "Enter the quantity: ";
    cin >> obj1.q;
    cout << "Enter the Price of one Product: ";
    cin >> obj1.p;

    obj1.Calculate(obj1.q, obj1.p);

    return 0;
}