class Solution {
public:
    bool checkZeroOnes(string s) {
        int count=0;
        int count1=0;
        int maxi=-1;
        int maxi1=-1;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(count>maxi){
                    maxi=count;
                }
                count=0;
                count1++;
            }
            else{
                if(count1>maxi1){
                    maxi1=count1;
                }
                count1=0;
                count++;
            }
        }
        if(count>maxi){
            maxi=count;
        }
        if(count1>maxi1){
            maxi1=count1;
        }
        
//    maxi->max cons 1, maxi1->max cons 0
        if(maxi>maxi1){
            return true;
        }
        return false;
    }
};