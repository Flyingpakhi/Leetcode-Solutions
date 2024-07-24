class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,tens=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five+=1;
            }
            else if(bills[i]==10 && five>=1){
                five-=1;
                tens+=1;
            }
            else{
                if(five>=1 && tens>=1){
                    five-=1;
                    tens-=1;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    return false;
                }
            }
        }
       return true;
    }
};