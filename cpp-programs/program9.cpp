#include<iostream>
using namespace std;

class Circle
{
    private: 
        float circle_radius, circle_area;
    public:
        float r;
        void c_area(float r)
        {
            circle_area = 3.14*r*r;
            cout << "Area of Circle = " << circle_area;
        }
};

int main()
{
    Circle obj1;
    cout << "Enter the Radius of Circle: ";
    cin >> obj1.r;
    obj1.c_area(obj1.r);
}