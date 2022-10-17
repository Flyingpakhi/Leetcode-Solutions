class Solution {
public:
    void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n,vector<int>& ans){
        int i=0,j=0;
 	int k=0;
    while(i<m &&j<n){
            if(nums1[i]<nums2[j]){
                ans[k]=nums1[i];
                i++;
                k++;
            }
            else{
                ans[k]=nums2[j];
                j++;
                k++;             
            }
        }
        while(k<nums1.size()){
            if(j<n){
            ans[k]=nums2[j];
                k++;
                j++;
        }
            else if(i<m){
                ans[k]=nums1[i];
                k++;
                i++;
            }
        }
        i=0;
        for(int k=0;k<m+n;k++){
            nums1[i]=ans[k];
            i++;
        }
    }
    
    
    
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(nums1.size());
        merge1(nums1,m,nums2,n,ans);
    }
};