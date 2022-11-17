class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ans=(ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);
        
        int ox1=max(ax1,bx1);
        int ox2=min(ax2,bx2);
        int oy1=max(ay1,by1);
        int oy2=min(ay2,by2);
        
        if(ox2>ox1 && oy2>oy1){
          ans -= ((ox1-ox2)*(oy1-oy2));
      }
        return ans;
    }
};