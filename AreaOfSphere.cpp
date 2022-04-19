
#include<iostream>
using namespace std;

int main()
{
    float area, radius, pi=3.14;
    cout<<"This program is for Area of Sphere\n";
    cout<<"Enter the radius of the sphere\n";
    cin>>radius;

    area = 4*pi*radius*radius;
    cout<<"The Area of Sphere is = "<<area<<" sq units";
    return 0;
}