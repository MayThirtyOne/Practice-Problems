class Solution {
public:
    bool checkRecord(string s) {
        int A=0;
        bool L=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A') A+=1;
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L' && i!=s.length()-2){
                L=true;
                break;
            }
            
        }
        if(L || A>1) return false;
        else return true;
    }
};
