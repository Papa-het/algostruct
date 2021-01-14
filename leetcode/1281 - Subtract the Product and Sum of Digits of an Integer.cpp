// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

class Solution {
public:
    int subtractProductAndSum(int n) {
        string number = to_string(n);
        int product = 1;
        int sum = 0;
        
        for(int i = 0; i < number.size(); i++) {
            product *= (number[i] - '0');
            sum += (number[i] - '0');
        }
        
        return product - sum;
    }
};