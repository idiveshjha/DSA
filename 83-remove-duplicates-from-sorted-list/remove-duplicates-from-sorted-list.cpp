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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* prev = head;
        ListNode* temp = prev->next;

        while(temp != NULL){
            if(temp->val == prev->val){
                temp = temp->next;
                continue;
            }

            //found temp unique
            prev->next = temp; //building connection first
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL; //at last, pointint prev->next to null
        return head;
    }
};