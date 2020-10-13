class Solution {
public:
    bool hasZero(int n){
        bool res = false;
        while(n){
            if(n%10==0) return true;
            n=n/10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> res;
        for(int i=1;i<=n;i++){
            int first = i;
            int second = n-i;
            if(!hasZero(first) && !(hasZero(second))){
                res.push_back(first);
                res.push_back(second);
                break;
            }
            
        }
        
        return res;
        
    }
};
