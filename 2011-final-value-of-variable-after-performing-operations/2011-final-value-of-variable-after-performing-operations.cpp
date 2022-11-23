class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        vector<int>ans;
        int x=0;
        for(int i=0;i<operations.size();i++){
            string str=operations[i];
            if(str[0]=='+'&& str[1]=='+'){
                x=x+1;
            }
            if(str[0]=='-'&& str[1]=='-'){
                x=x-1;
            }
            if(str[1]=='+'&& str[2]=='+'){
                x=x+1;
            }
            if(str[1]=='-'&& str[2]=='-'){
               x=x-1; 
            }
        }
        return x;
    }
};