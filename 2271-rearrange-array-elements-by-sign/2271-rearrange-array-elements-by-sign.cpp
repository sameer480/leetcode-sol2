class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>ne;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }else{
                ne.push_back(nums[i]);
            }


        }
        vector<int>ans;
        int i=0,j=0;
        while(i<p.size() &&j<ne.size()){
            ans.push_back(p[i]);
            ans.push_back(ne[i]);
            i++;
            j++;
        }
        return ans;
    }
};