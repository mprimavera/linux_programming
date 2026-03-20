#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        map[nums[0]] = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            int k = target - nums[i];
            if (map.find(k) != map.end())
            {
                return{map[k], i};
            }
            map[nums[i]] = i;
        }
        return {0, 0};
    }
};


int main() {

    Solution sol;

    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> result = sol.twoSum(nums, target);

    cout << "Indices: " << result[0] << ", " << result[1] << endl;

    return 0;
}

