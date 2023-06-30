class Solution {
public:
 int Help(vector<int>& nums, int index, vector<int>& dp) {
    if (index == 0) return nums[0];
    if (index < 0) return 0;
    if (dp[index] != -1) return dp[index];
    
    int inc = nums[index] + Help(nums, index - 2, dp);
    int exc = Help(nums, index - 1, dp);
    return dp[index] = max(inc, exc);
}

int rob(vector<int>& nums) {
    if (nums.empty()) return 0;
    vector<int> dp(nums.size(), -1);
    return Help(nums, nums.size() - 1, dp);
}
};