/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node *newNode = new Node(data), *curr = head;
        while(pos--) {
            curr = curr -> next;
        }
        // if we are standing at the last node then
        // the curr -> next is pointing to the NULL
        // in that case w don't have to set anything at the newNode -> next
        // otherwise we have to create the connection between the rest list
        if(curr -> next) {
            newNode -> next = curr -> next;
            curr -> next -> prev = newNode;
        } 
        // establishing the connection between the previous part of the list
        // with the last part of the list after adding the newNode
        curr -> next = newNode;
        newNode -> prev = curr;
        return head;
    }
};
