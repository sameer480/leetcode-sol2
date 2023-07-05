class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        unordered_map<int,int> map;
    int count=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==goal){
            count++;
        }
        if(map.find(sum-goal)!=map.end()){
            count+=map[sum-goal];
        }
        if(map.find(sum)!=map.end()){
            map[sum]++;
        }else{
            map[sum]=1;
        }
    }
    return count;
    }
};