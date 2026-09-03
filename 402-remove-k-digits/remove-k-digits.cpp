class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(int i = 0;i < num.size();i++){
            while(!st.empty() && k>0 &&st.top()> num[i]){
                st.pop();
                k=k-1;
            }
            st.push(num[i]);
        } 
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        } 
        
        string res = "";
        while(!st.empty())
            {
                res.push_back(st.top());
                st.pop();
            }
        while(res.size() > 0 && res.back() == '0'){
                res.pop_back();
            }
        
        reverse(res.begin(),res.end());

        if(res.empty()){
            return "0";
        }
        return res;
    }
    
};

