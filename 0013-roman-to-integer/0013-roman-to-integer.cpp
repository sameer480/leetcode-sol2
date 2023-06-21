#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            
            if (ch == 'I') {
                if (i + 1 < s.length() && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                    result -= 1;
                } else {
                    result += 1;
                }
            } else if (ch == 'V') {
                result += 5;
            } else if (ch == 'X') {
                if (i + 1 < s.length() && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                    result -= 10;
                } else {
                    result += 10;
                }
            } else if (ch == 'L') {
                result += 50;
            } else if (ch == 'C') {
                if (i + 1 < s.length() && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                    result -= 100;
                } else {
                    result += 100;
                }
            } else if (ch == 'D') {
                result += 500;
            } else if (ch == 'M') {
                result += 1000;
            }
        }

        return result;
    }
};
