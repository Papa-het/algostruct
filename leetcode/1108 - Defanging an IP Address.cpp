// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".


// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"

class Solution {
public:
    string defangIPaddr(string address) {
    string res;
        res.resize(address.size() + 6);
        int c = 0;

        for(int i = 0; i < address.size(); i++) {
            if(address[i] == '.') {
                res[i + c] = '[';
                res[i + c + 1] = '.';
                res[i + c + 2] = ']';
                c += 2;
             }
             else {
                res[i + c] = address[i];
             }
        }

      return res;
}
};