//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    {   
        stack<string> st;
        
        s.push_back('.');
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                st.push(tmp);
                tmp="";
            }
            else tmp.push_back(s[i]);
        }
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            ans.push_back('.');
            st.pop();
        }
        
        ans.pop_back();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends