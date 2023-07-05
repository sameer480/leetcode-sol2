class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> map;
        int i=0,j=0,ans=0,res=0;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
            ans=max(ans,map[s[i]]);
            if(i-j+1-ans>k){
               map[s[j]]--;
               j++;
            }
            res=max(res,i-j+1);
        }
        return res;
        
    }
};