class Solution {
public:
    int candy(vector<int>& ratings) {
        //check left (arr[i]>arr[i-1], then arr[i] gets one more candy)
        vector<int>ans(ratings.size(),1);
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                ans[i]=ans[i-1]+1;
            }
        }
//         check right(arr[i-1]>arr[i],then arr[i-1] gets one more candy)
        int curr=1,right=1,sum=max(1,ans[ratings.size()-1]);
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                curr=right+1;
                right=curr;
            }
            else{
                curr=1;
                right=1;
            }
            sum=sum+max(ans[i],curr);
        }
        return sum;
        
    }
};