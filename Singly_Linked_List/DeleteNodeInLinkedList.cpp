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
    void deleteNode(ListNode* node) {
        ListNode* tmp = node -> next;
        swap(node -> val, tmp -> val);
        node -> next = tmp -> next;
        delete tmp;
    }
};