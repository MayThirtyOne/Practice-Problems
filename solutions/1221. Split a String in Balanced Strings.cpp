class Solution {
public:
    int balancedStringSplit(string s) {
        int count =0;
        vector<char> r,l;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R') r.push_back(s[i]);
            if(s[i]=='L') l.push_back(s[i]);
            if(r.size()==l.size()) count+=1;
        }
        return count;
        
    }
};
