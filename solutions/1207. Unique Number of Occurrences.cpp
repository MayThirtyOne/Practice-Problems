class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> hm;
        for(int i=0;i<arr.size();i++){
            hm[arr[i]]+=1;
        }
        unordered_map<int, int>::iterator it = hm.begin();
        unordered_set<int> st;
        for(int i=0;i<hm.size();i++){
            st.insert(it->second);
            it++;
        }
        return st.size()==hm.size();
        
        
    }
};
