class NumArray {
public:
    vector<int>nu;
    NumArray(vector<int>& nums) {
        if(nums.empty()){
            return;
        }
        int n=nums.size();
        nu=vector<int>(n);
        nu[0]=nums[0];
        for(int i=1;i<n;i++){
            nu[i]=nums[i]+nu[i-1];
        }
        
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        if(left!=0){
            sum=nu[right]-nu[left-1];
        }
        else{
            sum=nu[right];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */