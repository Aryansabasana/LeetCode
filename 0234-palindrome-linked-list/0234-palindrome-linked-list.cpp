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
        ListNode* i = NULL;
        ListNode* temp = head;
        

        while (temp != NULL) {

            ListNode* n0 = new ListNode();
            n0->next = i;
            i = n0;
            n0->val = temp->val;
            temp = temp->next;

        }

        temp = head;

        while (i != NULL) {
            if (i->val != temp->val) {
                return false;
            }

            i = i->next;
            temp = temp->next;
        }

        return true;
    }
};