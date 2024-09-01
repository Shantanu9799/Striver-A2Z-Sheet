/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/

class Solution
{
public:
    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        struct Node *curr = head;
        while (curr) {
            struct Node *nextNode = curr->next;
            // Find the next unique node
            while (nextNode && nextNode->data == curr->data) {
                nextNode = nextNode->next;
            }

            // Update pointers to skip duplicates
            if (curr->next != nextNode) {
                curr->next = nextNode;
                // Ensure nextNode is not NULL before accessing its 'prev' pointer
                if (nextNode) {
                    nextNode->prev = curr;
                }
            }

            curr = curr->next;
        }
        return head;
    }
};