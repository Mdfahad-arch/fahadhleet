class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int hash [256];
        for(int i =0;i<256;i++){
            hash[i]=-1;
        }
        while(r<s.size()){
            if(hash[s[r]] != -1){
                if(hash[s[r]]>=l){
                    l = hash[s[r]]+1;
                }
            }
            int len = r-l+1;
            maxlen = max(len,maxlen);
            hash[s[r]]=r;
            r++;        
        }
        return maxlen;
    }
};