/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;

        stack<Node*> arr;

        while(temp != NULL) {

            if(temp->child != NULL) {

                if(temp->next != NULL) {
                    arr.push(temp->next);
                }

                temp->next = temp->child;
                temp->child->prev = temp;
                temp->child = NULL;
            }

            if(temp->next == NULL && !arr.empty()) {

                temp->next = arr.top();
                arr.top()->prev = temp;
                arr.pop();
            }

            temp = temp->next;
        }

        return head;
    }
};