class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        vector<int>a;
        reverse(num.begin(),num.end());
        int sum,digit;
        int carry=0;
        int fin;
        while(k>0){
            fin=k%10;
            //cout<<fin<<endl;
            k=k/10;
            a.push_back(fin);
        }
        int i=0;
        while(i<num.size() || i<a.size()){
            if(i<num.size() && i<a.size()){
               sum=num[i]+carry+a[i]; 
            }
            else if(i<num.size()){
                sum=num[i]+carry;
            }
            else{
                sum=a[i]+carry;
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
            i++;
        }
        if(carry>0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};