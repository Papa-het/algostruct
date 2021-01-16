// Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.

// Return the power of the string.


// Example 1:

// Input: s = "leetcode"
// Output: 2
// Explanation: The substring "ee" is of length 2 with the character 'e' only.


class Solution {
public:
    int maxPower(string s) {
        vector<int> tmp;
        int counter=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i]==s[i + 1]) counter++;
            else { 
                tmp.push_back(counter);
                counter = 0; 
            }
        }
        return *max_element(tmp.begin(), tmp.end()) + 1;
    }
};