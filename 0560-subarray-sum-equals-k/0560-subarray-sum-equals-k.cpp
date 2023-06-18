class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    int n = nums.size();
    int cnt = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum == k) {
            cnt++;
        }
        if (map.find(sum - k) != map.end()) {
            cnt += map[sum - k];
        }
        map[sum]++;
    }

    return cnt;
}

    
};