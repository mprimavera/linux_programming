#include <iostream>
using namespace std;

int main()
{
    // declare variables to use
    float net_salary, basic_salary, percent_allowances, percent_deductions;

    // attain values requried for calculations
    cout << "Enter Basic Salary:\n";
    cin >> basic_salary;

    cout << "Enter Percent Allowance:\n";
    cin >> percent_allowances;

    cout << "Enter Percent Deductions:\n";
    cin >> percent_deductions;

    // calculate the net salary
    net_salary = basic_salary * (1 + percent_allowances/100 - percent_deductions/100);

    // print the net salary to the user
    cout << "The net salary is $" << net_salary << endl;

    return 0;
}