class Solution {
public:
    bool checkIfPangram(string s) {
      set<char> st(s.begin(),s.end());
      return (st.size()==26) ;
    }
};