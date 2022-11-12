#include <iostream>
using namespace std;

class Number
{
private:
    int arr[5], max = 0, min;

public:
    void getNumbers()
    {
        cout << "Enter five numbers: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> this->arr[i];
        }
        min = arr[0];
        this->maxNum();
    }
    void maxNum()
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        cout << "Minimum Number = " << min << endl;
        cout << "Maximum Number = " << max << endl;
    }
};

int main()
{
    Number Obj1;
    Obj1.getNumbers();
}