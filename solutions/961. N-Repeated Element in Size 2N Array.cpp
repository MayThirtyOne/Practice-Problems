class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<A.size();i++){
            mp[A[i]]+=1;
            if(mp[A[i]]==A.size()/2) return A[i];
        }
        
        return 0;
    }
};
