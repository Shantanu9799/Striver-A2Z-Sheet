/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node* curr = head;
   while(pos--)  {
       curr = curr -> next;
   }
   Node* newNode = new Node(data);
   if(curr -> next == nullptr) {
       curr -> next = newNode;
       newNode -> prev = curr;
   } else {
       newNode -> next = curr -> next;
       newNode -> prev = curr;
       curr -> next = newNode;
       newNode -> next -> prev = newNode;
   }
   return;
}