class Solution {
public:
    string toLowerCase(string str) {
        string fres;
        for(int i=0;i<str.length();i++){
            int temp = (int)str[i];
            if(temp > 64 && temp <92) temp+=32;
            fres+=(char)temp;
        }
        return fres;
        
    }
};
