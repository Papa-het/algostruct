// Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.

// A subarray is a contiguous subsequence of the array.

// Return the sum of all odd-length subarrays of arr.


// Example 1:

// Input: arr = [1,4,2,5,3]
// Output: 58
// Explanation: The odd-length subarrays of arr and their sums are:
// [1] = 1
// [4] = 4
// [2] = 2
// [5] = 5
// [3] = 3
// [1,4,2] = 7
// [4,2,5] = 11
// [2,5,3] = 10
// [1,4,2,5,3] = 15
// If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0;
        
        for(int i=0; i<arr.size(); i++) {
            res+=arr[i];
            int sum=arr[i];
            for(int j=i+1; j<arr.size(); j++) {
                sum+=arr[j];
                if((i%2==0 && j%2==0) || (i%2==1 && j%2==1)) {
                    res+=sum;
                }
            }
        }
        
        return res;
    }
};