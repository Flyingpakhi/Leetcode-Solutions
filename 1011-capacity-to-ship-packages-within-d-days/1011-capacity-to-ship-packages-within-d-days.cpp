class Solution {
public:
    long long int sum(vector<int>&weights){
        long long int ans=0;
        for(int i=0;i<weights.size();i++){
            ans+=weights[i];
        }
        return ans;
    }
    bool possible(vector<int>&weights,int days,long long int mid){
        int count=1;
        long long int cap=mid;
        for(int i=0;i<weights.size();i++){
            if(weights[i]<=cap){
                cap=cap-weights[i];
            }
            else{
                count++;
                cap=mid-weights[i];
            }
        }
        // cout<<count<<endl;
        if(count>days){
            return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long int low=*max_element(weights.begin(),weights.end());
        long long int high=sum(weights);
        int res=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            bool ans=possible(weights,days,mid);
            if(ans){
                // cout<<mid<<endl;
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};