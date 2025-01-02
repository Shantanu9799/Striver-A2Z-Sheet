/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        // 1st, consdering the head position should be deleted
        if(x == 1) {
            Node *tmp = head;
            tmp -> next -> prev = NULL;
            head = tmp -> next;
            delete tmp;
            return head;
        }
        
        // now
        // search the node;
        Node *tmp = head;
        while(x > 1) {
            tmp = tmp -> next;
            x--;
        }
        // we got the element
        // first case - we are standing at the last element
        if(tmp -> next == NULL) {
            tmp -> prev -> next = NULL;
            delete tmp;
        } 
        // second case - we are stainding in any middle element
        else {
            tmp -> prev -> next = tmp -> next;
            tmp -> next -> prev = tmp -> prev;
            delete tmp;
        }
        // returning the new list's head
        return head;
    }
};
