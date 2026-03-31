#include <iostream>
using namespace std;


class Rectangle
{
private:
    int length;
    int width;

public:
       // non-parameterized constructor
    // Rectangle()
    // {
    //     length = 0;
    //     width = 0;
    // }

    // parameterized constructor, setting default to eliminate the need for a non-parameterized constructor
    Rectangle (int l = 0, int w = 0)
    {
        setLength(l);
        setWidth(w);
    }

    // copy constructor (deep copy = new object)
    Rectangle(Rectangle &r)
    {
        length = r.length;
        width = r.width;
    }

    // modifier function set length function
    void setLength(int l)
    {
        if(l < 0)
        {
            cout << "Error: Value cannot be negative" << endl;
            cout << "Default value set to 0 automatically; call setLength(int l) again with value to set not to 0" << endl;
        }
        else length = l;
    }

    // modifier function set width
    void setWidth(int w)
    {
        if(w < 0)
        {
            cout << "Error: Value cannot be negative" << endl;
            cout << "Default value set to 0 automatically; call setLength(int l) again with value to set not to 0" << endl;
        }
        else width = w;
    }

    // accessor function for checking length
    int getLength() { return length; }

    // accessor function for checking width
    int getWidth() { return width; }

    // accessor function for getting area
    int area() { return length * width; }

    // accessor function for getting perimeter
    int perimeter() { return 2 * (length + width); }

};

int main()
{
    // create a Rectange object called r1 using the parameterized constructor
    Rectangle r1(2, 5);

    // create a copy of the r1 object as a new object (deep copy)
    Rectangle r2(r1);

    cout << "r1 length and width: " << r1.getLength() << "  " << r1.getWidth() << endl;
    cout << "r1 area and perimeter: " << r1.area() << "    " << r1.perimeter() << endl;

    cout << "copy area and perimeter: " << r2.area() << "   " << r2.perimeter() << endl;

    // alter the copy rectangle length
    r2.setLength(10);
    // create a pointer to the r2 rectangle object
    Rectangle* ptr1 = &r2;
    // use the pointer and arrow accessor to set r2 width
    ptr1->setWidth(7);

    // show that r1 remained as it was and r2 was updated, since it is a new object
    cout << "r1 length and width: " << r1.getLength() << "  " << r1.getWidth() << endl;
    cout << "r2 length and width: " << r2.getLength() << "  " << r2.getWidth() << endl;

    // print new area and perimiter accessing using the dot and arrow accessors
    cout << "r2 copy area and perimeter: " << r2.area() << "    " << ptr1->perimeter() << endl;

    return 0;
}