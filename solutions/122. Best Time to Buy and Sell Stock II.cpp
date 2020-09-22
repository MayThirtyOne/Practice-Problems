class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tprofit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]) tprofit+=prices[i]-prices[i-1];
        }
        return tprofit;
    }
    
};
