class Solution {
  private: 
    void solve(string digits,int index,string output,string mapping[],vector <string> &ans){
       
      if(index>=digits.size()){
          ans.push_back(output);
          return ;
      }
    
     int number=digits[index]-'0';
     string value=mapping[number];
     
    for(int i=0;i<value.size();i++){
      output.push_back(value[i]);
      solve(digits,index+1,output,mapping,ans);
      output.pop_back();
    }
        
        
        
    }
    
    
public:
    vector<string> letterCombinations(string digits) {
       
         vector<string> ans;
         if(digits.size()==0) return ans;
         string output="";
        string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
        
        solve(digits,0,output,mapping,ans);   
        return ans;
        
    }
};