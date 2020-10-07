class Solution {
public:
    int bitwiseComplement(int N) {
        int mark=0, fans=0;
        if(N==0) return 1;
        while(N){
            int ldig=N%2;
            if(ldig==0) ldig=1;
            else if(ldig==1) ldig=0;
            fans+=ldig*pow(2,mark);
            mark+=1;
            N/=2;
            
        }
        return fans;
        
    }
};
