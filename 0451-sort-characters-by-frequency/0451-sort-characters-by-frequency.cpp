class Solution {
public:
    string frequencySort(string s) {
        string ans;
      unordered_map<char, int> m;
        priority_queue<pair<int,char>>maxh;
        // string ans;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto it:m){
            maxh.push({it.second,it.first});
        }
        while(maxh.size()>0){
            int freq=maxh.top().first;
            char ch= maxh.top().second;
            while(freq--){
                ans.push_back(ch);
            }
            maxh.pop();
        }
       return ans; 
    }
};