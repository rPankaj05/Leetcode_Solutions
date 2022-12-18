class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> ans(t.size(),0);
        stack<int> st;
        for(int i=t.size()-1;i>=0;i--){
            while(!st.empty() and t[st.top()]<=t[i]) st.pop();
            if(st.empty()) ans[i]=0;
            else ans[i]=(st.top()-i);
            st.push(i);
        }
        return ans;
    }
};