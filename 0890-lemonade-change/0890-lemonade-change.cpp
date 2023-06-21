class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt5=0,cnt10=0;
        for(int a: bills){
            if(a==5){
                cnt5++;
            }
            if(a==10){
                if(cnt5<1){
                    return false;
                }else{
                    cnt5--;
                    cnt10++;
                }
            }if(a==20){
                if(cnt10>0 && cnt5>0){
                    cnt10--;
                    cnt5--;
                }else if(cnt5>2){
                    cnt5-=3;
                }else{
                    return false;
                }
            }
        }
       return true; 
    }
};