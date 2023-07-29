
class Solution {
public:
#include<stack>
    string reverseWords(string s) {
        stack<string>str;
        string sb="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch!=' '){
                string temp="";
                while(i<s.length()&&ch!=' '){
                    temp+=ch;
                    i++;
                    if(i<s.length()){
                        ch=s[i];
                    }
                }
                str.push(temp);
            }
        }
        while(!str.empty()){
            sb+=str.top();
            str.pop();
            if(!str.empty()){
                sb+=" ";
            }
        }
        return sb;

        
    }
};