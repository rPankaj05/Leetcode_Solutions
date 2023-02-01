class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string ans="";
        
        if(str1+str2==str2+str1){
            int n=str1.size();
            int m=str2.size();
            
            int tmp=__gcd(n,m);
            
            for(int i=0;i<tmp;i++){
                ans.push_back(str1[i]);
            }
            
            return ans;
        }
        
        return ans;
    }
};