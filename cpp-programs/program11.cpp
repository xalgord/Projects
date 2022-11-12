#include<iostream>
using namespace std;

class Bills
{
private:
    float calls, total;

public:
    float b;
    float billCalculate(){
        calls = b;
        if(calls <= 50)
        {
            total = 200;
        }
        else if(calls > 50 && calls <= 150)
        {
            calls = calls - 50;
            total = (calls * 0.75) + 200;
        }
        else if(calls > 150 && calls <= 300)
        {
            calls = calls - 50;
            total = (100*0.75 + 200 + ((calls - 100) * 0.55));
        }
        else if(calls > 300)
        {
            calls = calls - 50;
            total = ((100 * 0.75) + 200 + ((calls - 100) * 0.55) + (calls - 150) * 0.35);
        }
        return total;
    }
};

int main()
{
        Bills obj1;
        float result;
        cout << "Enter the number of calls: ";
        cin >> obj1.b;

        result = obj1.billCalculate();
        cout << "Total Bill = " << result;

    return 0;
}