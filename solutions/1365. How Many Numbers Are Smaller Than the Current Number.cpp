class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
​
        sort(v.begin(),v.end());
        unordered_map<int,int> mp;
​
        for(int i=0;i<v.size();i++){
            if(mp.count(v[i])==0) mp[v[i]]=i;
            else continue;
        }
​
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(mp[nums[i]]);
        }
        
        return res;
        
    }
};
