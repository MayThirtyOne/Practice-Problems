class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            bool push = true;
            int num = i;
            while(num){
                int ldigit= num%10;
                if(ldigit==0){
                    push=false;
                    break;
                }
                if(i%ldigit!=0){
                    push=false;
                }
                num=num/10;
            }
            if(push) res.push_back(i);
        }
        return res;
    }
};
