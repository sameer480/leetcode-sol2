class Solution {
    public String largestOddNumber(String num) {
        String maxi="";
        for(int i=num.length()-1;i>=0;i--){
            int j=num.charAt(i)-'0';
            if(j%2!=0){
                return num.substring(0,i+1);
            }
        }
        return "";
    }
}