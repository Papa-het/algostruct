// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.


// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++) {
            v.push_back(pow(nums[i], 2));
        }
        
        sort(v.begin(), v.end());
        
        return v;
    }
};