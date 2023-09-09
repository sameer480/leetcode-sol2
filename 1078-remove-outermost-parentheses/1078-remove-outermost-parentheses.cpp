class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int index=0;
        for(char x:s){
            switch(x){
                case '(':
                if(index++>0)result+=x;
                break;
                case ')':
                if(index-->1)result+=x;
                break;
            }
        }
        return result;
        
    }
};