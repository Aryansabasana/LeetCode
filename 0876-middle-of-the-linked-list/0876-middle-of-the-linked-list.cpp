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
        int count = 0;
        for (ListNode* i = head; i != NULL; i = i->next) {
            count++;
        }

        int mid;

        if (count % 2 == 0) {
            mid = (count / 2) ;
        }

        else {
            mid = count / 2;
        }

        ListNode* temp = head;

        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }

        head = temp;
        temp = NULL;

        return head;
    }
};