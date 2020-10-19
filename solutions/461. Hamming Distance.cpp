class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> v1,v2;
        int first = max(x,y);
        int second = min(x,y);
        while(first){
            v1.push_back(first%2);
            first/=2;
        }
        
        while(second){
            v2.push_back(second%2);
            second/=2;
        }
        int count=0;
        int s1 = v1.size();
        int s2 = v2.size();
        int diff = abs(s1-s2);
        for(int i=0; i<diff;i++){
            v2.push_back(0);
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]) count+=1;
        }
        return count;
        
    }
};
