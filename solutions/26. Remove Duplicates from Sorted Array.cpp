class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
        std::set<int>::iterator myit = st.begin();
        for(int i=0;i<st.size();i++){
            nums[i]=*myit;
            myit++;
        }
        return st.size();
        
    }
};
