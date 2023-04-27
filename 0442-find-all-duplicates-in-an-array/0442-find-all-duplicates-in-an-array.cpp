#include<unordered_map>
class Solution {
public:
    
    void check(unordered_map<int,int>&seen,int value){
        if(seen.count(value)>0){
            seen[value]++;
        }
        else{
            seen[value]=1;
        }
    }
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>seen;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            check(seen,nums[i]);
        }
        unordered_map<int,int>::iterator it=seen.begin();
        while(it!=seen.end()){
            if(it->second==2){
                ans.push_back(it->first);
            }
            it++;
        }
        return ans;
        
    }
};