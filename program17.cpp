#include <iostream>
using namespace std;

class Number
{
private:
    int a, b, c, result;

public:
    void getNum()
    {
        cout << "Enter first number: ";
        cin >> this->a;
        cout << "Enter Second number: ";
        cin >> this->b;
        cout << "Enter Third number: ";
        cin >> this->c;
    }
    void maxNum()
    {
        (a > b && a > c) ? this->result = a : (b > a && b > c) ? this->result = b
                                                               : this->result = c;
        cout << this->result << " is greater";
    }
};

int main()
{
    Number obj1;
    obj1.getNum();
    obj1.maxNum();
}