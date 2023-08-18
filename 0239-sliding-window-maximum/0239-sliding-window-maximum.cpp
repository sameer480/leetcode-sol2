class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> v;
        multiset<int>mul;
        for(int i=0;i<nums.size();i++){
            mul.insert(nums[i]);
            if(mul.size()>k){
                mul.erase(mul.find(nums[i-k]));
            }
            if(i>=k-1){
                v.push_back(*mul.rbegin());
            }
        }
        return v;
        
        
    }
};