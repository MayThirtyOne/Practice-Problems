class Solution {
public:
    int subtractProductAndSum(int n) {
        int a=0;
        int b=1;
        while(n){
            a+=(n%10);
            b*=(n%10);
            n/=10;
        }
        
        return (b-a);
        
    }
};
