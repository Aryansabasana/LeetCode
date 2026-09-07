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
    ListNode* middleNode(ListNode* head) {

        ListNode* slow = head; 
        ListNode* fast = head->next;

        if(slow->next==NULL) {
            return slow;
        }


        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        } 

        return slow->next;


        // solution-1
        // int count = 0;
        // for (ListNode* i = head; i != NULL; i = i->next) {
        //     count++;
        // }

        // int mid;

        // if (count % 2 == 0) {
        //     mid = (count / 2) + 1;
        // }

        // else {
        //     mid = count / 2;
        // }

        // ListNode* temp = head;

        // for (int i = 0; i < mid; i++) {
        //     temp = temp->next;
        // }

        // head = temp;
        // temp = NULL;

        // return head;
    }
};