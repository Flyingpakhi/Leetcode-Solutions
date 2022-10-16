class Solution {
public:
    void merge(vector<int>& arr1, int size1, vector<int>& arr2, int size2, vector<int>& ans)
{
        int i=0,j=0;
 	int k=0;
        while(i<size1 &&j<size2){
            if(arr1[i]<arr2[j]){
                ans[k]=arr1[i];
                i++;
                k++;
            }
            else{
                ans[k]=arr2[j];
                j++;
                k++;             
            }
        }
        while(k<size1+size2){
            if(j<size2){
            ans[k]=arr2[j];
                k++;
                j++;
        }
            else if(i<size1){
                ans[k]=arr1[i];
                k++;
                i++;
            }
        }
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size()+nums2.size());
        merge(nums1,nums1.size(),nums2,nums2.size(),ans);
        int len=ans.size();
        double ans1=0.0;
        if(len%2==0){
            int mid=(0+(len-1))/2;
            ans1=(ans[mid]+ans[mid+1])/2.0;
        }
        else{
            int mid=(0+(len-1))/2;
            ans1=ans[mid];
        }
        return ans1;
    }
};