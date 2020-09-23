class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> v;
        while(n){
            v.push_back(n%2);
            n/=2;
            
        }
        int rem = 32-v.size();
        while(rem--){
            v.push_back(0);
        }
        int k=v.size()-1;
        uint32_t res=0;
        
        for(int i=0;i<v.size();i++){
            res+=pow(2,k)*v[i];
            k-=1;
        }
        
        return res;
        
    }
};
