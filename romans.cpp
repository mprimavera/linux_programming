#include <iostream>
using namespace std;

class Solution {
    public:
    int decimal(char c)
    {
        switch(c)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string romans)
    {
        int result = 0;
        int len = romans.length();

        for (int i = 0; i < len; i++)
        {
            int deciml = decimal(romans[i]);

            if (i < (len-1))
            {
                int next_deciml = decimal(romans[i + 1]);

                if (deciml < next_deciml)
                {
                    result -= deciml;
                }
                else result += deciml;
            }
            else result += deciml;
        }
        return result;
    }
};

int main ()
{
    Solution sol;

    cout << sol.romanToInt("LVIII") << endl;

    return 0;
}