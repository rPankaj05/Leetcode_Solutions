class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
       string temp="";
        stack<string> st;
        for(auto it:s){
            if(it==' '){
                if(temp!=""){
                    st.push(temp);
                    temp="";
                }
            }
            else {
                temp.push_back(it);
            }
        }
        string ans="";
    while(!st.empty()){
        string it=st.top();
        ans+=it;
        ans.push_back(' ');
        st.pop();
    }
        ans.pop_back();
        return ans;
    }
};