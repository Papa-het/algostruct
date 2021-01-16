// Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.

// Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1:

// If S[i] == "I", then A[i] < A[i+1]
// If S[i] == "D", then A[i] > A[i+1]


// Example 1:

// Input: "IDID"
// Output: [0,4,1,3,2]


class Solution {
public:
    vector<int> diStringMatch(string S) {
        int s=S.size();
        int dec=s;
        int inc=0;
        vector<int> v(s+1, 0);
        
        for(int i=0; i<s+1; i++) {
            if(S[i]=='D') {
                v[i]=dec;
                dec--;
            } else {
                v[i]=inc;
                inc++;
            }
        }
        
        return v;
    }
};