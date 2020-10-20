class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mval = INT_MIN;
        for(int i=0;i<arr.size();i++){
            mval = max(mval, arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==mval) return i;
        }
        return 0;
    }
};
