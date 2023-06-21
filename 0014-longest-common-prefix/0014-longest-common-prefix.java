class Solution {
    public String longestCommonPrefix(String[] arr) {
        int index=0;
        Arrays.sort(arr);
        String str1=arr[0];
        String str2= arr[arr.length-1];
        while(index<str1.length()){
        if(str1.charAt(index)==str2.charAt(index)){
            index++;
        }else{
            break;
        }
    }
    if(index==0){
        return "";
    }
        return str1.substring(0,index);
    
        
    }
}