class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        reverse(digits.begin(),digits.end());
        
        for(int i=0;i<digits.size();i++){
            if(digits[i]==9){
                digits[i]=0;
            }
            
            else{
                digits[i]=digits[i]+1;
                break;
            }
        }
        bool flag=false;
        for(int i=0;i<digits.size();i++){
            if(digits[i]!=0){
                flag=true;
                break;
            }
        }
        if(!flag) digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits;
        
    }
};
