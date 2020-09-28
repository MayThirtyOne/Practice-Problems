class Solution {
public:
    int maximum69Number (int num) {
        int res = INT_MIN;
        string s = to_string(num);
        for(int i=0;i<s.length();i++){
            s=to_string(num);
            s[i]='9';
            int fres = stoi(s);
            res=max(res,fres);
            
        }
        return res;
        
    }
};
