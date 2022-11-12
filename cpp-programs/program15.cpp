#include <iostream>
using namespace std;

class LinearSearch
{
private:
    int val, arr[5] = {2, 5, 3, 4, 7}, hit = -1;

public:
    int myFunc()
    {
        cout << "Enter the number: " << endl;
        cin >> val;
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == val)
            {
                hit = i;
                break;
            }
        }
        return hit;
    }
};

int main()
{
    int result;
    LinearSearch obj1;

    result = obj1.myFunc();
    if (result < 0)
    {
        cout << "Element not Found";
    }
    else
    {
        cout << "Element Found at " << result << " position";
    }

    return 0;
}