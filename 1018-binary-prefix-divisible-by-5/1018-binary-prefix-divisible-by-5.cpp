#include<string>
class Solution {
public:
    // int binarytodec(int num){
    //     int temp=num;
    //     int sumval=0;
    //     int base=1;
    //     while(temp>0){
    //         int last=temp%10;
    //         sumval+=last*base;
    //         temp=temp/10;
    //         base=base*2;
    //     }
    //     return sumval;
    // }
    //if x is the first digit then the second digit will be 2*x+nums[i]; it is happening because we shift number in left and adding next...if 3 is 11 then after right shift and adding 1 it will 111->3*2+1=7.
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int sum=0;
        vector<bool>ans;
        for(int i=0;i<nums.size();i++){
            sum=2*sum+nums[i];
            if(sum%5==0){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            sum=sum%5;
        }
        return ans;
    }
};