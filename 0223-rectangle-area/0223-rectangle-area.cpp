class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        long int firstX=(ax2-ax1);
        long int firstY=(ay2-ay1);
        long int area1=firstX*firstY;
        if(area1<0){
            area1=(-1)*area1;
        }
        long int secX=(bx2-bx1);
        long int secY=(by2-by1);
        long int area2=secX*secY;
        if(area2<0){
            area2=(-1)*area2;
        }
        long int overlap1=max((min(ax2,bx2)-max(ax1,bx1)),0);
        long int overlap2=max((min(ay2,by2)-max(ay1,by1)),0);
        long int total=area1+area2-(overlap1*overlap2);
        return (int)total;
        
    }
};