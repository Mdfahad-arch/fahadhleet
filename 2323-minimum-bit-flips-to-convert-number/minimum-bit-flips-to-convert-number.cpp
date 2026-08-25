class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = start^goal;
        int cnt  = 0;
        for(int i =0; i<31; i++){
            if(n & (1<<i)){
                cnt = cnt+1;
            }
        }
        return cnt;
    }
};