class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        while (i < version1.length() || j < version2.length()) {
            long long v1 = 0, v2 = 0;

            // Parse version1 number component
            while (i < version1.length() && version1[i] != '.') {
                v1 = v1 * 10 + (version1[i] - '0');
                i++;
            }

            // Parse version2 number component
            while (j < version2.length() && version2[j] != '.') {
                v2 = v2 * 10 + (version2[j] - '0');
                j++;
            }

            if (v1 > v2) {
                return 1;
            } else if (v1 < v2) {
                return -1;
            }

            // Skip the dot (.)
            i++;
            j++;
        }

        // Both versions are equal
        return 0;
    }
};
