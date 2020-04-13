#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            int numberToFind = target - nums[i];

            if (hash.find(numberToFind) != hash.end())
                return {hash[numberToFind], i};

            hash[nums[i]] = i;
        }
        return {};
    }
};

int main() {

    vector<int> nunList = {3, 2, 4};

    auto solution = new Solution();
    auto findIndexArray = solution->twoSum(nunList, 6);

    vector<int>::iterator iterator;

    for (iterator = findIndexArray.begin(); iterator != findIndexArray.end(); iterator++) {
        cout << *iterator << endl;
    }

    return 0;
}
