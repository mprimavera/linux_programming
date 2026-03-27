# include<iostream>
using namespace std;
    
/*program for demo pointers

*/
int main()
{

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