class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=2;i<=100000;i++){
            long long int temp = pow(i,2);
            if(temp==num){
                return true;
            }
        }
        if(num==1) {
            return true;
        }
        return false;
    }
};
