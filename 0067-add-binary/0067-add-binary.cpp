class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.size(), n2=b.size(); string pk;
        if(n1>n2){
            { for(int i=n2;i<n1;i++) pk+='0'; }
             b=pk+b; }
        else if(n2>n1)
        {{ for(int i=n1;i<n2;i++) pk+='0'; } a=pk+a;}
        string ans;
        int i=max(n1,n2)-1, carry=0;
        while(i>=0)
         { int temp=0;
           temp=(a[i]-'0') +  (b[i]-'0')+ carry; 
           if(temp==2) { ans+='0'; carry=1;}
           else if(temp==1) { ans+='1'; carry=0;}
           else if(temp==3) { ans+='1'; carry=1;}
            else {ans+='0'; carry=0;}
          i--;
          }
        if(carry==1) ans+='1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};