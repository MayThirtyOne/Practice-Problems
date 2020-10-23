class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int freq[300]={0};
        int count=0;
        for(int i=0;i<chars.length();i++) freq[chars[i]]+=1;
        for(int i=0;i<words.size();i++){
            string myword = words[i];
            int freq2[300]={0};
            for(int k=0;k<myword.length();k++) freq2[myword[k]]+=1;
            bool check = true;
            for(int m=0;m<300;m++){
                if(freq2[m]>freq[m]) {
                    check=false;
                    break;
                }
                
            }
            if(check) count+=myword.length();
        }
        return count;
    }
};
