class Solution {
public:
    int xorOperation(int n, int start) {
        
        int res=0;
        while(n--){
            res^=start;
            start+=2;
        }
     return res;   
    }
};
