class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool inc = true;
        bool dec = true;
        
        for(int i=1;i<A.size();i++){
            if(A[i]<A[i-1]){
                inc = false;
                break;
            }
        }
        for(int i=1;i<A.size();i++){
            if(A[i]>A[i-1]){
                dec = false;
                break;
            }
        }
        
        return(inc || dec);
        
    }
};
