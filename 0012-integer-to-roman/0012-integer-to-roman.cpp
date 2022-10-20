class Solution {
public:
    string intToRoman(int num) {
      string ans="";   int a[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
     string b[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
              int i=12;
              while(num>0)
               { int temp=num/a[i]; num=num%a[i];
                  while(temp--) ans+=b[i]; 
                  i--; 
                  }
        return ans;
    }
};