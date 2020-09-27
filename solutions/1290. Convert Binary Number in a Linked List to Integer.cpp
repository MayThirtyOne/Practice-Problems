/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> b_values;
        ListNode *temp=head;
        int c=0;
        while(temp!=NULL){
            b_values.push_back(temp->val);
            temp=temp->next;
            c+=1;
        }
         int res=0;
        int pp = b_values.size()-1;
        for(int i = 0; i<c ; i++){
            res+=pow(2,pp)*b_values[i];
            pp-=1;
        }
        
        return res;
        
        
    }
};
