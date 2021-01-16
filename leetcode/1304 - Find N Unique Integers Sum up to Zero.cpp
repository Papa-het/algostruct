// Given an integer n, return any array containing n unique integers such that they add up to 0.


// Example 1:

// Input: n = 5
// Output: [-7,-1,1,3,4]
// Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].


class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n, 0);
        for(unsigned int i=0; i<n/2; i++) {
            res[i]=i+1;
            res[i+n/2]=-(i+1);
        }
        return res;
    }
};