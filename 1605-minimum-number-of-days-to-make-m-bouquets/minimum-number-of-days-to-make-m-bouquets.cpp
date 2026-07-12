class Solution {
public:
    bool possible(vector<int> & bloomDay, int day ,int m,int k){
        int bouquets = 0;
        int flowers = 0;
        for(int i =0;i<bloomDay.size();i++){
            if(bloomDay[i] <=day){
                flowers ++;
                if(flowers == k){
                    bouquets++;
                    flowers = 0;
                }
            }
                else{
                    flowers = 0;
                }
            }
            return bouquets >= m;
        }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long need = 1LL * m * k;
        if(need> bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = high;

        while(low<=high){
             int mid = (low+high)/2;
             
             if(possible(bloomDay, mid, m,k)){
                ans = mid;
                high = mid-1;
             }
             else{
                low = mid+1;
             }
        }

        return ans;
    }
};