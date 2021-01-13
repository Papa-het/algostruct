// You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

// Letters are case sensitive, so "a" is considered a different type of stone from "A".


// Example 1:

// Input: jewels = "aA", stones = "aAAbbbb"
// Output: 3

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res=0;
        for(int i = 0; i<stones.size(); i++) {
            for(int j = 0; j < jewels.size(); j++) {
                if(stones[i]==jewels[j]) res++;
            }
        }

        return res;
        }
};