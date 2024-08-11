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
        vector<int>ans1(ratings.size(),1);
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                ans1[i]=ans1[i+1]+1;
            }
        }
        int count=0;
        for(int i=0;i<ratings.size();i++){
            if(ans[i]>ans1[i]){
                count+=ans[i];
            }
            else{
                count+=ans1[i];
            }
        }
        return count;
        
    }
};