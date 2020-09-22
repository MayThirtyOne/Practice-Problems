class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++){
            mp=min(mp,prices[i]);
            profit=max(profit,prices[i]-mp);
        }
        
        return profit;
        
    }
};
