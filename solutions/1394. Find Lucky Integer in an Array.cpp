class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i < arr.size();i++){
            mp[arr[i]]+=1;
        }
        vector<int> fres;
        unordered_map<int,int>::iterator it = mp.begin();
        for(int i=0;i<mp.size();i++){
            if(it->first==it->second) {
                fres.push_back(it->first);
            }
            it++;
        }
        if(fres.size()==0)
        return -1;
        else{
            sort(fres.begin(), fres.end(), greater<int>());
            return fres[0];
        }
        
    }
};
