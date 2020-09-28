class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> fres;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        multimap<int,int, greater<int>> mmp;
        unordered_map<int,int>::iterator it = mp.begin();
        for(int i=0;i<mp.size();i++){
            mmp.insert(make_pair(it->second, it->first));
            it++;
            
        }
        
        multimap<int,int>::iterator bt = mmp.begin();
        for(int i=0;i<k;i++){
            fres.push_back(bt->second);
            bt++;
        }
        return fres;
    }
};
