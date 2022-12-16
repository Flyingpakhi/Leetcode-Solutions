class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        reverse(digits.begin(),digits.end());
        int sum,digit;
        int carry=0;
        for(int i=0;i<digits.size();i++){
            if(i>0){
               sum=digits[i]+carry; 
            }
            else{
                sum=digits[i]+carry+1;
            }
            if(sum>9){
                digit=sum%10;
                carry=sum/10;
            }
            else{
                digit=sum;
                carry=0;
            }
            ans.push_back(digit);
        }
        if(carry==1){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};