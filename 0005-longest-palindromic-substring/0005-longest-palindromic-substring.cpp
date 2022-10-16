class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0 and n==1) return s;
        int idx=0, length=0;
        for(int i=0;i<n;i++){
            int low=i-1, high=i+1;
            while(low>=0 and s[i]==s[low]) low--;
            while(high<n and s[i]==s[high]) high++;
            while(low>=0 and high<n and s[low]==s[high]) low--, high++;
            if(length<high-low-1)
            idx=low+1, length=high-low-1;
        }
        
        return s.substr(idx,length); 
    }
};