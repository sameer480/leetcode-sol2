class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        int flipped=start^goal;
        while(flipped!=0){
            int rbs= flipped &-flipped;
            flipped-=rbs;
            count++;
        }
        return count;

        
    }
};