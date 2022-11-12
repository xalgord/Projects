#include <iostream>
using namespace std;

class Student
{
private:
    int marks[5] = {0}, total_marks = 0;
    string subjects[5] = {"Maths", "English", "DSA", "C++", "CSA"};

public:
    void getMarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks in " << this->subjects[i] << ": ";
            cin >> this->marks[i];
            total_marks = marks[i];
        }
        cout << endl;
    }
    void printData()
    {
        if (total_marks >= 60)
        {
            cout << "You got " << total_marks << "% marks and holds the First Position.";
        }
        else if (total_marks >= 50 && total_marks <= 59)
        {
            cout << "You got " << total_marks << "% marks and holds the Second Position.";
        }
        else if (total_marks >= 40 && total_marks <= 49)
        {
            cout << "You got " << total_marks << "% marks and holds the Third Position.";
        }
        else
        {
            cout << "You got " << total_marks << "% marks and you failed.";
        }
    }
};

main()
{
    Student obj1;
    obj1.getMarks();
    obj1.printData();
    return 0;
}