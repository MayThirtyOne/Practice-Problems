class Solution {
public:
    vector<int> constructRectangle(int area) {
        map<int,pair<int, int>> mp;
        
        for(int i=area+1/2;i>=1;i--){
            if(area%i==0){
                int s = area/i;
                mp.insert(make_pair(abs(s-i), make_pair(i,s)));
            }
        }
        
        map<int,pair<int, int>>::iterator it = mp.begin();
        vector<int> res;
        int l = (it->second.second);
        int b = (it->second.first);
        
        if(l>=b){
            res.push_back(l);
            res.push_back(b);
        }
        else{
            res.push_back(b);
            res.push_back(l);
        }
        return res;
        
        
    }
};
