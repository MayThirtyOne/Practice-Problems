class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int d1=0;
        int size=mat.size();
        for(int i=0;i<mat.size();i++){
            d1+=mat[i][i];
        }
         int d2=0;
         for(int i=0;i<size;i++){
            d2+=mat[i][size -1 -i];
        }
        if(size%2==0)
            return d1+d2;
        else return (d1+d2)-mat[size/2][size/2];
        
    }
};
