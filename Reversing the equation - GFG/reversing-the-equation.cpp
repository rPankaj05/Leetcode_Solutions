//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {  int n=s.size();
            string tmp="";
            stack<string> st;
            for(int i =0;i<n;i++){
                if(s[i]=='*' || s[i]=='/' || s[i]=='+' || s[i]=='-'){
                    st.push(tmp);
                    tmp=s[i];
                    st.push(tmp);
                    tmp="";
                }
                else tmp+=s[i];
            }
            st.push(tmp);
            string ans="";
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends