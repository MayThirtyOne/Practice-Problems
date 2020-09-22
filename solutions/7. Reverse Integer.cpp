​
class Solution {
public:
    int reverse(int x) {
        int number= abs(x);
        string s = to_string(number);
        std::reverse(s.begin(),s.end());
        try{
        if(x<0) return -1*stoi(s);
        else return stoi(s);   
        }
        catch (...)  {
            return 0;
        
    } 
    }
};
