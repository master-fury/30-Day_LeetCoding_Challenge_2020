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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr=head;
        ListNode* ptr2=head;
        while(ptr2!=NULL){
            ptr2=ptr2->next;
            if(ptr2==NULL){
                return ptr;
            }
            ptr=ptr->next;
            ptr2=ptr2->next;
        
        }
        return ptr;
    }
};