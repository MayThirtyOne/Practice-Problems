class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res;
        for(int i=0;i<prices.size();i++){
            int fprice = prices[i];
            bool pushed = false;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    int fprice = (prices[i]-prices[j]);
                    res.push_back(fprice);
                    pushed=true;
                    break;
                }
                
            }
            if(!pushed)
            res.push_back(fprice);
            
        }
        
        return res;
        
    }
};
