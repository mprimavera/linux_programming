#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};



int main()
{
    // create a Rectangle object called r
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;

    // create a Rectangle object in heap and access with Rectange pointer
    Rectangle* ptr1 = new Rectangle;

    // set the heap rectangle length to 5 with the pointer accessor arrow operator
    ptr1->length = 10;

    // set r1's breadth to 5 using the arrow operator
    ptr1->breadth = 5;

    bool equal = (r1.length == ptr1->length);

    // both accessor operators produce the same value / or data attribute
    cout << equal << endl << r1.length << " = " << ptr1->length << endl << ptr1;

    // both accessor operators produce the same function return value
    cout << endl << r1.area() << " = " << ptr1->area() << endl << r1.perimeter() << " = " << ptr1->perimeter() << endl;
    return 0;
}