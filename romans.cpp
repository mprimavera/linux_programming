#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map <char, int> romans = 
            {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000},
            };

            int decimal = 0;
            int length = s.length() - 1;

            for (int i = 0; i <= length; i++)
            {
                int value = romans[s[i]];

                if ((i != length) && (romans[s[i+1]] > value))
                {
                    decimal += (romans[s[i+1]] - value);
                    i++;
                }

                else
                {
                    decimal += value;
                }                
            }

            return decimal;
        }

};

int main()
{
    Solution sol;

    std::cout << sol.romanToInt("MCMXCIV") << std::endl;


    return 0;
}