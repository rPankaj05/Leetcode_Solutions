/**
 * @param {string} s
 * @return {number}
 */
var minChanges = function(s) {
    let n = s.length;
    let i=0;
    let ans=0;
    while(i<n){
      if(s[i]!=s[i+1]) ans++;
      i+=2;
    }
    return ans;
};