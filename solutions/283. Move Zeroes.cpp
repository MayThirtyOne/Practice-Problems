class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //pure bruteforce approach
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==0){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        
    }
};
