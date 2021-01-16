// In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.

// Return the element repeated N times.


// Example 1:

// Input: [1,2,3,3]
// Output: 3


class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int el;
        for(int i=0; i<A.size(); i++) {
            for(int j=i+1; j<A.size(); j++) {
              if(A[i]==A[j]) {
                  el=A[j]; 
                  return el;
              }
            }
        }
        return el;
    }
};