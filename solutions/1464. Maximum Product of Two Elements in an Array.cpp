class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res= INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                res = max(res, (nums[j]-1)*(nums[i]-1));
            }
        }
        return res;
    }
};
