class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        for (int i = 0; i < (1 << n); i++) {
            vector<int> subset; // Create a vector for each subset
            for (int j = 0; j < n; j++) {
                if (i & (1 << j))
                    subset.push_back(nums[j]); // Push the element into the subset vector
            }
            v.push_back(subset); // Push the subset into the main vector
        }
        return v;
    }
};
