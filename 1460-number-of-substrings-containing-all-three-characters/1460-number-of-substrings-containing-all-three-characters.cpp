class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> map;
        int l=0,r=0,end=s.size()-1,count=0;
    while(r!=s.size()){
        map[s[r]]++;
        while(map['a']&&map['b']&&map['c']){
            count+=1+end-r;
            map[s[l]]--;
            l++;

        }
        r++;

    }
    return count;
        
    }
};