class Solution {
public:
    string res(int num){
        if(num<10){
            return to_string(num);
        }
        else if(num==10){return "a";}
        else if(num==11){return "b";}
        else if(num==12){return "c";}
        else if(num==13){return "d";}
        else if(num==14){return "e";}
        return "f";
    }
    string toHex(int num) {
        string ans="";
        int count=1;
        int counting=0;
        int sum=0;
        while(num!=0 && counting<=31){
            if(count==16){
                ans+=res(sum);
                count=1;
                sum=0;
            }
            if(num&1){
                sum+=1*count;
            }
            count=count*2;
            num=num>>1;
            counting++;
        }
        ans+=res(sum);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};