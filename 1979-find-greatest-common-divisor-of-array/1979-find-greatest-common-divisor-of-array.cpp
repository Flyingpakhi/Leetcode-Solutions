class Solution {
public:
    int gcd(int a,int b){
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=gcd(nums[0],nums[nums.size()-1]);
        return ans;
    }
};