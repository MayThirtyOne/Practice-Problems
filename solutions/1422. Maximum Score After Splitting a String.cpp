class Solution {
public:
    int rscore(string s){
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') count+=1;
        }
        return count;
    }
    
     int lscore(string s){
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') count+=1;
        }
        return count;
    }
    
    int maxScore(string s) {
        int res = 0;
        for(int i=1;i<s.length();i++){
            string s1 = s.substr(0,i);
            string s2 = s.substr(i, s.length());
            res = max( lscore(s1)+ rscore(s2), res);
            
        }
        
        return res;
        
    }
};
