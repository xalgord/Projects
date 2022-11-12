#include <iostream>
using namespace std;

class Number
{
private:
    int arr[50], max, min;
    char num;

public:
    int i = 0;
    void getNum()
    {
        while (true)
        {
            cout << "Enter number: ";
            cin >> arr[i];
            i++;
            cout << endl
                 << "Want to enter another number? (y/n): ";
            cin >> num;
            if (num == 'n')
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }
    void showMax()
    {
        this->min = arr[0];
        this->max = arr[0];

        for (int j = 0; j < i; j++)
        {
            if (max < arr[j])
            {
                max = arr[j];
            }
            if (min > arr[j])
            {
                min = arr[j];
            }
        }

        cout << "Maximum number = " << max << endl;
        cout << "Minimum number = " << min << endl;
    }
};

int main()
{
    Number obj;
    obj.getNum();
    obj.showMax();
    return 0;
}