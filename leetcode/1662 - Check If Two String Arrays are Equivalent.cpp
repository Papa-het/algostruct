// Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

// A string is represented by an array if the array elements concatenated in order forms the string.


// Example 1:

// Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
// Output: true
// Explanation:
// word1 represents string "ab" + "c" -> "abc"
// word2 represents string "a" + "bc" -> "abc"
// The strings are the same, so return true.

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string tmp;
        string tmp2;
        
        for(int i=0; i<word1.size(); i++) {
            tmp+=word1[i];
        }
        
        for(int i=0; i<word2.size(); i++) {
            tmp2+=word2[i];
        }
        
        return tmp==tmp2;
    }
};