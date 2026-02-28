#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num1 = 0;
        int num2 = 0;
        int total = 0;
        int index1 = 0;
        int index2 = 0;
        bool found_solution = false;

        while (!found_solution)
        {     
            for(int value1: nums)
            {
                num1 = value1;
                for(int value2: nums)
                {
                    if (index1 == index2)
                    {
                        index2++;
                        continue;
                    }
                    num2 = value2;
                    total = num1 + num2;
                    if (total == target)

                    {
                        found_solution = true;
                        break;
                    }
                    index2 += 1;
                }
                if (total == target)
                {
                    found_solution = true;
                    break;
                }
                index1 += 1;
                total = 0;
                index2 = 0;
            }
        }
    return {index1, index2};
    }
};

int main() {

    Solution sol;

    vector<int> nums = {0, 4, 3, 0};
    int target = 0;

    vector<int> result = sol.twoSum(nums, target);

    cout << "Indices: " << result[0] << ", " << result[1] << endl;

    return 0;
}

