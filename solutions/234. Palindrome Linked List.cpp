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
    bool isPalindrome(ListNode* head) {
        vector<int> v1;
        vector<int> v2;
        ListNode *temp = head;
        while(temp!=NULL){
            v1.push_back(temp->val);
            temp=temp->next;
        }
        
        v2=v1;
        reverse(v2.begin(), v2.end());
        return v1==v2;
        
    }
};
