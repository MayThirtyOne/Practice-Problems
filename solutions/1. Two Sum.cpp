class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }  
        for(int i=0;i<nums.size();i++){
            int rest = (target-nums[i]);
            if(mp.count(rest)){
                if(mp[rest]!=i){
                result.push_back(i);
                result.push_back(mp[rest]);
                return result;
            }
            }
        }      
        return result;
        
        
        
    }
};
