class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int l1 = num1.length();
        int l2 = num2.length();
        string first_number;
        string second_number;
        int diff = abs(l1-l2);
        
        // if(l1==l2) {
        //     continue;}
        
        if(l1>l2){
            first_number=num1;
            for(int i=0;i<diff;i++)
                second_number+='0';
            second_number+=num2;
            
        }
        else if(l1<l2){
            first_number=num2;
            for(int i=0;i<diff;i++){
                second_number+='0';
            }
            second_number+=num1;
                    
            
        }
        else if (l1==l2){
            first_number=num1;
            second_number=num2;
        }
        // return to_string(first_number.length())+"/"+to_string(second_number.length());
        string fres;
        int carry=0;
       for(int i=max(l1,l2)-1;i>=1;i--){
           int d1 = first_number[i]-'0';
           int d2 = second_number[i]-'0';
           int sum = d1+d2+carry;
           if(sum<10){
               carry=0;
               fres+=to_string(sum);
           }
           else{
               carry=1;
               fres+=to_string(sum-10);
               
           }
       }
        string fres_final=to_string((first_number[0]-'0')+(second_number[0]-'0')+carry);
        reverse(fres.begin(),fres.end());
        fres_final+=fres;
        return fres_final;
        
    }
};
