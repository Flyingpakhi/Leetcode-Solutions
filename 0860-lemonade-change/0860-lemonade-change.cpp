class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,tens=0,i=0;
        for(i=0;i<bills.size();i++){
            if(bills[i]==5){
                five+=1;
            }
            else if(bills[i]==10 && five>=1){
                five-=1;
                tens+=1;
            }
            else if(bills[i]==20){
                if(five>=1 && tens>=1){
                    five-=1;
                    tens-=1;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }
        cout<<i<<endl;
        if(i==bills.size()){
            return true;
        }
        return false;
    }
};