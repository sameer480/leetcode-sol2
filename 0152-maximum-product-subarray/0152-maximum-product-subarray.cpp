class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
       int maxpr[n];
       int minpr[n];
        maxpr[0]=nums[0];
        minpr[0]=nums[0];
        int maxpro=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                maxpr[i]=max(nums[i],minpr[i-1]*nums[i]);
                minpr[i]=min(nums[i],maxpr[i-1]*nums[i]);
                maxpro=max(maxpro,maxpr[i]);
            }
            else{
                 maxpr[i]=max(nums[i],maxpr[i-1]*nums[i]);
                minpr[i]=min(nums[i],minpr[i-1]*nums[i]);
                maxpro=max(maxpro,maxpr[i]);

            }
        }
return maxpro;
        
    }
};