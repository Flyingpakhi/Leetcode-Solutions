class Solution {
public:
    void rev(string& s,int l,int h){
        while(l<=h){
            swap(s[l++],s[h--]);
        }
    }
    string reverseStr(string s, int k) {
        int count=k*2;
        int iter=s.size()/count;
        int i=0;
        while(iter){
            rev(s,i,i+k-1);
            i=i+count;
            iter--;
        }
        if(i<s.size()){
            if((s.size()-i)>=k){
                rev(s,i,i+k-1);
            }
            else{
                rev(s,i,s.size()-1);
            }
        }
        return s;
    }
};