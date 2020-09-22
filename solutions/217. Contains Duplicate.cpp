class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        bool res=false;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0) mp[nums[i]]=1;
            else mp[nums[i]]+=1;
            if(mp[nums[i]]>=2) return true;
            
        }
        return res;
    }
};
