#include<string>
class Solution {
public:
    string dectobin(int n,int size){
        string s="";
        while(n){
            int l=n%2;
            n=n/2;
            s+=to_string(l);
        }
        while(s.size()<size){
            s+="0";
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int bintodec(string s){
        int i=0;
        int base=1;
        int dec=0;
        while(i<s.size()){
            int last=int(s[s.size()-i-1]-'0')%10;
            dec+=base*last;
            base=base*2;
            i++;
        }
        return dec;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int p=pow(2,nums.size());
        vector<int>ans(p,0);
        for(int i=0;i<nums.size();i++){
                int dec=bintodec(nums[i]);
                ans[dec]=1;
        }
        int res=0;
        for(int i=0;i<p;i++){
            if(ans[i]==0){
                res=i;
                break;
            }
            cout<<ans[i]<<endl;
        }
        string str=dectobin(res,nums.size());
        return str;
    }
};