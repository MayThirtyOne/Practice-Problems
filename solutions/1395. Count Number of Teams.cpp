class Solution {
public:
    bool check(int a, int b, int c){
        if(a>b && b>c) return true;
        else if(a<b && b< c) return true;
        else return false;
    }
    int numTeams(vector<int>& rating) {
        int cnt=0;
        for(int i=0;i<rating.size()-2;i++){
            for(int j=i+1;j<rating.size()-1;j++){
                for(int k=j+1;k<rating.size();k++){
                    if(check(rating[i],rating[j],rating[k])) {
                        cnt+=1;
                    }
                }
            }
        }
​
        return cnt;
        
    }
};
