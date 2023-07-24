class Solution {
    
    double solve(double x, int n){
            
        if(n==0) return 1;
        if(n==1) return x;
        double ans=myPow(x,n/2);
        ans=ans*ans;
        if(n%2==0) return ans;
        else return ans*x;
        
    }
public:
    
    double myPow(double x, int n) {
       double ans=solve(x,abs(n)) ;
        if(n>=0) return ans;
        else return 1/ans;
    
       
            
        
    }
};