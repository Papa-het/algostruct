// Given two strings A and B of lowercase letters, return true if you can swap two letters in A so the result is equal to B, otherwise, return false.

// Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at A[i] and A[j]. For example, swapping at indices 0 and 2 in "abcd" results in "cbad".


// Example 1:

// Input: A = "ab", B = "ba"
// Output: true
// Explanation: You can swap A[0] = 'a' and A[1] = 'b' to get "ba", which is equal to B.


class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.length() != B.length() || A.length() == 0)
            return false;
    
        int diffs = 0;
        int i1 = -1; int i2 = -1;
        for(int i = 0; i < A.length(); ++i){
            if (A[i] != B[i]){
                diffs++;
                if (diffs == 1)
                    i1=i;
                else if (diffs == 2)
                    i2 = i;
                else if (diffs > 2)
                    return false;
            }
        }
        
        if (diffs == 1)
            return false;
        
        if (diffs == 2) {
            if (A[i1] == B[i2] && A[i2] == B[i1])
                return true;
            return false;
        }
        
        int A_arr[26]={0};

        for(auto a : A){
            A_arr[a-'a']++;
            if (A_arr[a-'a'] > 1)
                return true;
        }
        return false;
    }
};