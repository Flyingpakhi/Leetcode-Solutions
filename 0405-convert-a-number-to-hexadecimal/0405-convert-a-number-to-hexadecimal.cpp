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
        unsigned int n=num;
        string ans="";
        do{
            ans+=res(n%16);
            n=n/16;
        }while(n);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};