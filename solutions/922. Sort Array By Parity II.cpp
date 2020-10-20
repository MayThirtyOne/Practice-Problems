class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> even,odd,res;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0) even.push_back(A[i]);
            else odd.push_back(A[i]);
        }
        
        for(int i=0;i<even.size();i++){
            res.push_back(even[i]);
            res.push_back(odd[i]);
        }
        return res;
        
    }
};
