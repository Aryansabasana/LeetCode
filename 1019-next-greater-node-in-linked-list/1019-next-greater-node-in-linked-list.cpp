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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;

        while(head!=NULL) {
            arr.push_back(head->val);
            head = head->next;
        }

        vector<int> ans(arr.size(), 0);

        for(int i=0; i<ans.size(); i++) {
            for (int j=i+1; j<arr.size(); j++) {
                if(arr[j]>arr[i]) {
                    ans[i]=arr[j];
                    break;
                }
            }
        }
        return ans;
    }
};