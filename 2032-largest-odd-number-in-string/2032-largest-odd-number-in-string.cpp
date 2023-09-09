class Solution {
public:
    string largestOddNumber(string num) {
        string maxi="";
        for(int i=num.length()-1;i>=0;i--){
            int j=num[i]-'0';
            if(j%2!=0){
                return num.substr(0,i+1);
            }        }
        return "";
    }
};