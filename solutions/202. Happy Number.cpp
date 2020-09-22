class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(true){
            int asum =0;
            while(n){
                asum+=pow(n%10,2);
                n/=10;
            }
            if(mp[asum]==0) mp[asum]=1;
            else mp[asum]+=1;
            if(mp[asum]>1){
                return false;
            }
            n=asum;
            if(asum==1) return true;
        }
        
    }
};
