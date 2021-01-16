// A self-dividing number is a number that is divisible by every digit it contains.

// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

// Also, a self-dividing number is not allowed to contain the digit zero.

// Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

// Example 1:
// Input: 
// left = 1, right = 22
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        
        for(int i=left; i<=right; i++) {
            if(i<10) {
                res.push_back(i);
            }
            else {
                string n=to_string(i);
                bool nt;
                for(int j=0; j<n.size(); j++) {
                    if((n[j]-'0')!=0 && i%(n[j]-'0')==0) {
                        nt=true;
                    } else {
                        nt=false;
                        break;
                    }
                }
                if(nt) res.push_back(i);
            }
        }

        return res;
    }
};