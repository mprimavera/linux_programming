# include<iostream>
using namespace std;
    
/*program for demo pointers */

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}


int main()
{
    // declares a function pointer fp to function with signature for two int arguments and return type int
    int (*fp)(int, int);
    // assign the function pointer to the max function address: fp -> pointer to function
    fp = max;
    // call max function using function pointer fp
    int maximum = fp(2, 3);
    cout << maximum << endl;
    // can dynamically switch the pointer to the other function, since the min() signature matches the fp declaration signature
    // same name different function = runtime polymorphism
    fp = min;
    // derefercences the variable fp to the function, and the parentheses keep the dereferencing prior to the function call
    // without parenthesis, ie *fp(4, 5) would call the function then derefernce the int returned which is an error
    // (*fp) -> dereferenced to the function itself
    cout << (*fp)(2, 3) << endl; 

    int x = {10};

    // this will throw an error because of type difference, pointer versus int
    // int* p = x; 

    // this is proper, p stores the address of x
    int* p = &x;

    // this works as both are pointer types as well
    int* q = p;

    // array to pointer decay
    int arr[5] = {1,2,3,4,5};
    int* p2 = arr;   // arr → becomes &arr[0]


	int a = 10; // variable label a assigned value 10
	int* p3 = &a; // pointer variable p assigned the address of variable a

    
	cout << a << endl; // prints the value of a, 10
	cout << &a << endl; // prints the address of the data a was assigned to
	cout << p3 << endl; // prints the same address of the data a was assigned to
	cout << &p3 << endl; // prints the address of the pointer variable p's data
	cout << *p3 << endl; // prints the data at the address p points to, which is 10, by dereferencing
    cout << p << endl;
    cout << q << endl;
	return 0;
}