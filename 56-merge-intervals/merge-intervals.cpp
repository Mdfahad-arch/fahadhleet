class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> mergedintervals;
        if(intervals.size()==0){
            return intervals;
        }

        sort(intervals.begin(),intervals.end());
        vector<int> tempInt = intervals[0];

        for(auto it : intervals){
            if(it[0]<= tempInt[1]){
                tempInt[1] = max(it[1],tempInt[1]);
            }
            else{
                mergedintervals.push_back(tempInt);
                tempInt = it;
            }
        }
        mergedintervals.push_back(tempInt);
        return mergedintervals;
    }
};