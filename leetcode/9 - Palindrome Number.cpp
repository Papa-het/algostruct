// Given an integer x, return true if x is palindrome integer.

// An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.


// Example 1:

// Input: x = 121
// Output: true


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s=to_string(x);
        int size=s.size();
        for(int i=0; i<size; i++) {
            if(s[i]==s[size-1-i]) {
                continue;
            } else {
                return false;
            }
        }
            
        return true;
    }
};