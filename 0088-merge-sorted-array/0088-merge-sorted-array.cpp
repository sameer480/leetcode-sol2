class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> dp(m + n);
        int i = 0, j = 0, k = 0;
        
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                dp[k] = nums1[i];
                i++;
            } else {
                dp[k] = nums2[j];
                j++;
            }
            k++;
        }
        
        while (i < m) {
            dp[k] = nums1[i];
            i++;
            k++;
        }
        
        while (j < n) {
            dp[k] = nums2[j];
            j++;
            k++;
        }
        
        nums1 = dp;
    }
};
