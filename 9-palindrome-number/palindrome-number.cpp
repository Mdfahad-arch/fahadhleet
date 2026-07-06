class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
        return false;
         int left  = 0;
         string s = to_string(x);
         int right  = s.size() -1;
        while(left<right)
        {
            if(s[left] != s[right])
            return false;
            left++;
            right--;
        }
        return true;
    }
};