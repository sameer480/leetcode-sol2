class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> nzero(n, 0); // Create a new vector to store non-zero elements
        
        int j = 0; // Index for non-zero elements
        
        // Move all non-zero elements to the new vector
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nzero[j] = nums[i];
                j++;
            }
        }
        
        // Fill the remaining elements with zeroes
        while (j < n) {
            nzero[j] = 0;
            j++;
        }
        
        // Copy the modified vector back to the original vector
        nums = nzero;
    }
};
