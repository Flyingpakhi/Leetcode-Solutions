class Solution {
public:
    void reversee(string& s){
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
    string addBinary(string a, string b) {
        string ans;
        int carry=0;
        reversee(a);
        reversee(b);
        if(a.length()<b.length()){
            string temp=a;
            a=b;
            b=temp;
        }
        int i=0;
        int sum=0,digit=0;
        while(a[i]!='\0'){
            if(i>=b.length()){
                sum=(a[i]-'0')+carry;
            }
            else{
            sum=(a[i]-'0')+(b[i]-'0')+carry;
        }
        if(sum>1){
            digit=sum%2;
            carry=1;
        }
        else{
            digit=sum;
            carry=0;
            }
            ans+=to_string(digit);
            i++;
    }
        if(carry==1){
           ans+=to_string(carry); 
        }
        reversee(ans);
        return ans;
}
};