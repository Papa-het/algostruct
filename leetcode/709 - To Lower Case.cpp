// Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.


// Example 1:

// Input: "Hello"
// Output: "hello"


class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0; i<str.size(); i++) {
            if(((int)str[i] > 96) || ((int)str[i] < 65)) continue;
            str[i] = char((int)str[i] + 32);
        }
        
        return str;
    }
};