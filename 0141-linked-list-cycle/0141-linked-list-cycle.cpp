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
    bool hasCycle(ListNode *head) {
       unordered_set<ListNode*> addr;
       ListNode* i = head;
        while(i!=NULL) {
        if(addr.count(i)) {
            return true;
        }

        addr.insert(i);
        i=i->next;
       }

       return false;

    }
};