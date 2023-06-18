class Solution {
    public int longestConsecutive(int[] arr) {
       HashMap<Integer,Boolean> ans=new HashMap<>();
	    for(int val:arr){
	        ans.put(val,true);
	    }
	    for(int val:arr){
	        if(ans.containsKey(val-1)){
	            ans.put(val,false);
	        }
	    }
	    int mps=0;
	    int ml=0;
	    for(int val:arr){
	        if(ans.get(val)==true){
	           int tl=1;
	           int tsp=val;
	            while(ans.containsKey(tsp+tl)){
	                tl++;
	            }
	            if(tl>ml){
	                ml=tl;
	                mps=tsp;
	            }
	        }
	    }
	    return ml;
        
    }
}