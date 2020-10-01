class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        multimap<int,string> mp;
        for(int i=0;i<s.size();i++){
            mp.insert(make_pair(s[i].length(), s[i]));
        }
        multimap<int, string>::iterator it = mp.begin();
        string smallet_word = it->second;
        string fans;
        for(int i=0;i<smallet_word.length();i++){
            multimap<int, string>::iterator it2 = mp.begin();
            it2++;
            for(int k=0;k<mp.size()-1;k++){
                string new_word = it2->second;
                if(smallet_word[i]!=new_word[i]){
                    return fans;
                }
                it2++;
                
            }
            fans+=smallet_word[i];
                
​
​
​
        }
        return fans;
​
        
    }
};
