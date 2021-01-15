// Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.

// A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:

// 0 <= i < j < k < arr.length
// |arr[i] - arr[j]| <= a
// |arr[j] - arr[k]| <= b
// |arr[i] - arr[k]| <= c
// Where |x| denotes the absolute value of x.

// Return the number of good triplets.


// Example 1:

// Input: arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3
// Output: 4
// Explanation: There are 4 good triplets: [(3,0,1), (3,0,1), (3,1,1), (0,1,1)].


class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int counter=0;
    
        for(int k=0; k<arr.size(); k++) {
            for(int j=0; j<k; j++) {
                for(int i=0; i<j; i++) {
                        if((abs(arr[i]-arr[j])<=a)&&(abs(arr[j]-arr[k])<=b)&&(abs(arr[i]-arr[k])<=c)) counter++;
                }
            } 
        }

        return counter;
    };
    
    int abs(int v) {
      return v * ((v>0) - (v<0));
    }
};