/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int e=n;
        while(l<=e){
            int mid=l+(e-l)/2;
            int res=guess(mid);
            if(res==0){
                return mid;
            }
            else if(res==1){
                l=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return 0;
}
};