class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> org = heights;
        sort(heights.begin(), heights.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(org[i]!=heights[i]) count+=1;
        }
        return count;
    }
};
