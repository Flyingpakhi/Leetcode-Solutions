class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>s,s1;
        //first we put all the nums1 ele to s set to create a unique vector with no repetition..
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        //first we put all the nums2 ele to s1 set to create a unique vector with no repetition..
        for(int i=0;i<nums2.size();i++){
            s1.insert(nums2[i]);
        }
        //we check for every element in s.we check if any element present in s1 then we will not add it in ans.
        for(auto i:s){
            if(s1.find(i)!=s1.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};