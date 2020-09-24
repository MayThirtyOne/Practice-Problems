class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> mp;
        for(int i=0;i<indices.size();i++){
            mp.insert({indices[i],s[i]});
        }
        string f;
        for(int i=0;i<mp.size();i++){
            f+=mp[i];
        }
        
        return f;
        
    }
};
