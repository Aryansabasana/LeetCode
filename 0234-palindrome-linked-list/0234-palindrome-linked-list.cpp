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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* temp = slow->next;
        ListNode* addr = NULL;

        while(temp!=NULL) {
            ListNode* temp1 = temp->next;
            temp->next = addr;
            addr = temp;
            temp = temp1;
        }

        while(addr!=NULL) {
            if(head->val!=addr->val) {
                return false;
            }

            head = head->next;
            addr= addr->next;
        }

        return true;



        


        // Solution-1    
        // ListNode* i = NULL;
        // ListNode* temp = head;
        

        // while (temp != NULL) {

        //     ListNode* n0 = new ListNode();
        //     n0->next = i;
        //     i = n0;
        //     n0->val = temp->val;
        //     temp = temp->next;

        // }

        // temp = head;

        // while (i != NULL) {
        //     if (i->val != temp->val) {
        //         return false;
        //     }

        //     i = i->next;
        //     temp = temp->next;
        // }

        // return true;
    }
};