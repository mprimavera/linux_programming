#include<iostream>
using namespace std;

// global a only used in the last line of main
int a = 9;

// function receives a and does nothing with it
// it alters the value of x = 5 to x = 10, then the x memory is garbage once the control returns to main
void call_by_value(int x) { x = 10; }

// function receives a reference bound directly to the original variable (no copy is made)
// function uses alias to modify value of a to 10
void call_by_reference(int& x) { x = 10; }

// the address is received, and it is used as a pointer to modify the data at that addrerss
void call_by_address(int* x) { *x = 10; }


int main()
{
    
    int a = 10; 
    // call by value: creates a copy that is modified in function scope
    call_by_value(a);
    // a remains 5
    cout << a << endl;

    // call by reference: modifies the actual value of the argument
    // function parameter x is bound directly to the original variable (no copy)
    call_by_reference(a);
    // a is now 10
    cout << a << endl;

    // reset a back to 5
    a = 5;
    // call by address (pointer)
    // function call with address of a sent as the argument
    call_by_address(&a);
    cout << a << endl;

    cout << ::a << endl;
    
    return 0;
}