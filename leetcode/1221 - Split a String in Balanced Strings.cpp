// Balanced strings are those who have equal quantity of 'L' and 'R' characters.

// Given a balanced string s split it in the maximum amount of balanced strings.

// Return the maximum amount of splitted balanced strings.


// Example 1:

// Input: s = "RLRRLLRLRL"
// Output: 4
// Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.


class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        int balance = 0;
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'L') {
                balance+=1;
            } else if(s[i] == 'R') {
                balance-=1;
            }
            if(balance == 0){
                res+=1;
            }
        }
        
        return res;
    }
};