class Solution {
public:
   /* int maxi=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]>prices[i]){
                    int diff=prices[j]-prices[i];
                    if(diff>maxi){
                        maxi=diff;
                    }
                }
            }
        }
        return maxi;*/
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],profit=0;
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return profit;
    }
};