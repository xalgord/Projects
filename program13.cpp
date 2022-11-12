#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i = 0, j;
    char num;
    cout << "\n****** Press e to exit the program ******\n"
         << endl;
    while (i == 0)
    {
        cout << "Press enter to generate a random number ";
        num = getchar();
        if (num != 'e')
        {
        label1:
            j = rand() % 100;
            if (j >= 10)
            {
                cout << j << endl;
            }
            else
            {
                goto label1;
            }
        }
        else
        {
            i++;
        }
    }

    cout << "\nExiting..." << endl;
}