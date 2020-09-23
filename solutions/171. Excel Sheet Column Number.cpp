class Solution {
public:
    int titleToNumber(string s) {
        int ans=0;
        int tmp=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            ans+=(int)s[i]%32*pow(26,tmp);
            tmp+=1;
        }
        return ans;
    }
};
