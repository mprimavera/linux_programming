#include <iostream>
using namespace std;

// template for searching arrays of any data type
template <typename T, int N>
// the size is written in at compilation for non-dynamic array in stack not heap, so only address of first element is needed
void find_element(T element, T (&arr)[N])
{
    int i = 0;
    // search the array for the value
    while (i < N)
    {
        if (arr[i] == element)
        {
            cout << "Found " << element << " at index " << i << endl;
            break;
        }
        i++;
    }
    if (i == N) cout << "Failed to find " << element << endl;
}


int main()
{
    int int_array[] = {1, 2, 3};
    char char_array[4] = {'a', 'b', 'c', 'd'};

    int int_element = 3;
    char char_element = 'k';

    find_element(int_element, int_array);
    find_element(char_element, char_array);

    return 0;
}