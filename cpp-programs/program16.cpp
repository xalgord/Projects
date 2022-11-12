#include <iostream>
using namespace std;

class Student
{
private:
    int RollNo;
    char Sname[20], Fname[20];
    float Eng, Maths, Science, Total;

    void Marks()
    {
        Total = Eng + Maths + Science;
    }

public:
    void Getdata()
    {
        cout << "Firstname: ";
        cin >> Fname;
        cout << "Surname: ";
        cin >> Sname;
        cout << "Roll Number: ";
        cin >> RollNo;

        cout << endl
             << "Marks in English: ";
        cin >> Eng;
        cout << "Marks in Maths: ";
        cin >> Maths;
        cout << "Marks in Science: ";
        cin >> Science;

        this->Marks();
    }
    void Showdata()
    {
        cout << endl << "Student Name: " << this->Fname << " " << this->Sname << endl;
        cout << "Roll Number: " << RollNo << endl;
        cout << "Total Marks: " << Total;
    }
};

int main()
{
    Student obj1;
    obj1.Getdata();
    obj1.Showdata();
    return 0;
}