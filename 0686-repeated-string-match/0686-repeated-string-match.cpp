class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 0;
        string repeated_a = a;

        while (repeated_a.length() < b.length()) {
            repeated_a += a;
            count++;
        }

        if (repeated_a.find(b) != string::npos) {
            return count + 1;
        }

        repeated_a += a;
        count++;

        if (repeated_a.find(b) != string::npos) {
            return count + 1;
        }

        return -1;
    }
};
