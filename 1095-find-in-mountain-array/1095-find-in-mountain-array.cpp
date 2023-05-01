/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    //traverse in left side of peak which is in increasing order
    int leftbinarySearch(MountainArray &mountainArr,int s,int e,int target){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    //traverse in right side of peak which is in decreasing order
    int rightbinarySearch(MountainArray &mountainArr,int s,int e,int target){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)>target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int s=0;
        int e=mountainArr.length()-1;
        //first we find the peak index 
        while(s<e){
            int mid=s+(e-s)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        int peak=s;
        //we traverse in the left side of peak value to find target
        int leftSide=leftbinarySearch(mountainArr,0,peak,target);
        //we traverse in the right side of peak value to find target
        int rightSide=rightbinarySearch(mountainArr,peak+1,mountainArr.length()-1,target);
        if(leftSide==-1 || rightSide==-1){
            return max(leftSide,rightSide);
        }
        return min(leftSide,rightSide);
    }
};