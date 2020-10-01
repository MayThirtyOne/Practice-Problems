/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> st;
        int cnt =0;
        ListNode *temp = head;
        while(temp!=NULL){
            if(st.count(temp)==0)
            {
                st.insert(temp);
                temp=temp->next;
                cnt+=1;
            }
            else return true;
        }
        
        return !(st.size()==cnt);
        
    }
};
