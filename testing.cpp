# include <iostream>
using namespace std;
#include<cmath>


float distance(int x1,int y1,int x2,int y2)
{
    float dist;
    
    dist= sqrt(pow((x2 - x1), 2.0f) + pow((y2 - y1),2.0f));//write expression here
    
    return dist;
}


int main()
{
    //float result = distance(0, 0, 3, 4);

    int a = 11;
    int b = 9;

    cout << (a | b) << endl;

    return 0;
}
