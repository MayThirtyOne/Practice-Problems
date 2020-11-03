class Solution {
public:
    double average(vector<int>& salary) {
        int least = INT_MAX;
        int most = INT_MIN;
        double total = 0;
        
        for(int i=0;i<salary.size();i++){
            if(salary[i]<least) least = salary[i];
            if(salary[i]>most) most = salary[i];
            total+=salary[i];
        }
        
        return (total-(most+least))/(salary.size()-2);
        
    }
};
