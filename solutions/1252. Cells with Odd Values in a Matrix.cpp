class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
        int arr[50][50];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=0;
            }
        }
        for(int i=0;i<indices.size();i++){
            int r = indices[i][0];
            int c = indices[i][1];
            for(int j = 0; j<m;j++){
                arr[r][j]+=1;
            }
            for(int j = 0; j<n;j++){
                arr[j][c]+=1;
            }
            
            
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]%2!=0) count+=1;
            }
        }
        return count;
        
        
        
    }
};
