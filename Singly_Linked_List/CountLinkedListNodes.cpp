/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int length = 0;
        Node* currNode = head;
        while(currNode) {
            length++;
            currNode = currNode -> next;
        }
        return length;
    }
};