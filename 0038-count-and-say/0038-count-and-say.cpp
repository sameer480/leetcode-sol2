class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string s="1";
        for(int i=2;i<=n;i++){
            int c=1;
            string t="";
            s+="&";
            for(int j=1;j<s.length();j++){
                if(s[j]!=s[j-1]){
                    t+=to_string(c);
                    t=t+s[j-1];
                    c=1;

                }else{
                    c++;
                }
            }
              s=t;
        }
      
        return s;
        
    }
};