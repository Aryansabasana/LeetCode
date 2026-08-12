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
    ListNode* removeNodes(ListNode* head) {
         ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *nextPtr = NULL;

        while(current != NULL) {
            nextPtr=current->next;
            current -> next = prev;
            prev = current;
            current = nextPtr;

        }

      int maxi = 0;
        ListNode* curr = prev;
        ListNode* newHead = NULL;
        ListNode* tail = NULL;

        while (curr != NULL) {
            ListNode* next = curr->next;

            if (curr->val >= maxi) {
                maxi = curr->val;

                if (newHead == NULL) {
                    newHead = curr;
                    tail = curr;
                } else {
                    tail->next = curr;
                    tail = curr;
                }
            }

            curr = next;
        }

        tail->next = NULL;

        
        current = newHead;
        prev = NULL;

        while (current != NULL) {
            nextPtr = current->next;
            current->next = prev;
            prev = current;
            current = nextPtr;
        }

        return prev;
    }
};