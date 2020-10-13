class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res;
        for(int i=0;i<A.size();i++){
            res.push_back(pow(A[i],2));
        }
        sort(res.begin(), res.end());
        return res;
    }
};
