/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *current=head;
        ListNode *previous=NULL;
        while (current!=NULL){
            ListNode *r=previous;
            previous=current;
            current=current->next;
            previous->next=r;
        }
        head=previous;
        return head;
    }
};
