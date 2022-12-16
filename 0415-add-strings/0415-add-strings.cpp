class Solution {
public:
    void reverse(string& s){
        int i=0;
        int j=s.length()-1;
        while(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
    string addStrings(string num1, string num2) {
        string ans;
        reverse(num1);
        reverse(num2);
        int sum,digit;
        int carry=0;
        int i=0;
        while(i<num1.length() || i<num2.length()){
            if(i<num1.length() && i<num2.length()){
               sum=(num1[i]-'0')+carry+(num2[i]-'0'); 
            }
            else if(i<num1.size()){
                sum=(num1[i]-'0')+carry;
            }
            else{
                sum=(num2[i]-'0')+carry;
            }
            if(sum>9){
                digit=sum%10;
                carry=sum/10;
            }
            else{
                digit=sum;
                carry=0;
            }
            ans+=to_string(digit);
            i++;
        }
        if(carry>0){
           ans+=to_string(carry);
        }
        reverse(ans);
        return ans;
    }
};