# include<iostream>
using namespace std;

int main()
{
    float radius, area;
    float pie = 3.1425;
    // prompt user for a radius
    cout << "Enter the circle's radius:\n";
    cin >> radius;

    // calculate area
    area = pie * radius * radius;

    // print area to user
    cout << "Area = " << area << "\n";

    // return program complete without error
    return 0;
}