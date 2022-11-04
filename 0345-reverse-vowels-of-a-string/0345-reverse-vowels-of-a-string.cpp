class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
        char ch1=tolower(s[i]);
        char ch2=tolower(s[j]);
      if( ch1=='a' or ch1=='e' or ch1=='i' or ch1=='o' or ch1=='u' ) 
        {
          if( ch2=='a' or ch2=='e' or ch2=='i' or ch2=='o' or ch2=='u' )
               swap(s[i++],s[j--]);
            else j--; 
           }
       else i++;
        }
      return s;
    }
};