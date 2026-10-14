/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;

        for(int i=0;i<n;i++){
            temp=temp->next;
             
        }
        ListNode* curr=head;
        if(temp == NULL) {
            return head->next;
        }

         
        while(temp->next!=NULL){
            temp=temp->next;
            curr=curr->next;
        }
        curr->next=curr->next->next;

        return head;
        
    }
};
