// You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

// Given the string command, return the Goal Parser's interpretation of command.


// Example 1:

// Input: command = "G()(al)"
// Output: "Goal"
// Explanation: The Goal Parser interprets the command as follows:
// G -> G
// () -> o
// (al) -> al
// The final concatenated result is "Goal".

class Solution {
public:
    string interpret(string command) {
        std::string res;

        for(int i = 0; i < command.size(); i++) {
            switch(command[i]) {
                case 'G':
                    res.push_back('G');
                    break;
                case '(':
                    if(command[i + 1] == 'a') {
                        res.push_back('a');
                        res.push_back('l');
                        break;
                    }
                    else {
                        res.push_back('o');
                        break;
                    }
            }
        }
        
        return res;
    }
};