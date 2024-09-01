/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Get a pointer to the head node
        struct Node *cur = *head_ref;
        
        while (cur != NULL) {
            if (cur->data == x) {
                // If the current node is the head node
                if (cur == *head_ref) {
                    *head_ref = cur->next; // Update the head reference
                    if (*head_ref != NULL) {
                        (*head_ref)->prev = NULL; // Update the new head's prev to NULL
                    }
                    delete cur; // Delete the current node
                    cur = *head_ref; // Move cur to the new head
                } else {
                    // Not the head node, adjust the pointers
                    cur->prev->next = cur->next;
                    if (cur->next != NULL) {
                        cur->next->prev = cur->prev;
                    }
                    struct Node *temp = cur;
                    cur = cur->next; // Move to the next node
                    delete temp; // Delete the current node
                }
            } else {
                // Move to the next node
                cur = cur->next;
            }
        }
    }
};