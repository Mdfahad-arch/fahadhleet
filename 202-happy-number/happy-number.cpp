class Solution {
public:
    int sum(int n ){
        int s = 0;

        while(n>0){
            int digi = n%10;
            s += digi*digi;
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(true){
            slow = sum(slow);
            fast  = sum(sum(fast));

            if(fast == 1) return true;
            if(slow == fast) return false;
        }
    }
};