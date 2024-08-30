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
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        struct Node* currNode = head;
        while(currNode) {
            if(currNode -> data == key) return true;
            currNode = currNode -> next;
        }
        return false;
    }
};