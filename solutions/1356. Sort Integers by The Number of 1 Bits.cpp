class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> G[30];
        vector<int> myres;
        for(int i=0;i<arr.size();i++){
            int ones = __builtin_popcount(arr[i]);
            G[ones].push_back(arr[i]);
        }
        for(int i=0;i<30;i++){
            vector<int> temp = G[i];
            sort(temp.begin(), temp.end());
            for(int j=0;j<temp.size();j++) myres.push_back(temp[j]);
        }
        
        
        return myres;
        
    }
};
