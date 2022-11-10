class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!st.empty() and s[i]==st.top()) { st.pop(); continue;}
            else st.push(s[i]);
        }
        
        string ans="";
        while(!st.empty())  ans.push_back(st.top()) , st.pop();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};