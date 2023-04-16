class Solution {
public:
    bool prime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>a;
        for(int i=0;i<nums.size();i++){
            if(prime(nums[i])){
                a.insert(nums[i]);
            }
            else{
                for(int j=2;j<=nums[i];j++){
                    if(nums[i]%j==0 && prime(j)){
                        a.insert(j);
                    }
                }
            }
        }
    //     for (auto& str : a) {
    //     std::cout << str << ' ';
    // }
        return a.size();
    }
};