#include <algorithm>

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *std::min_element(nums.begin(), nums.end());
        int max = *std::max_element(nums.begin(), nums.end());
        return std::gcd(min, max);
    }
};