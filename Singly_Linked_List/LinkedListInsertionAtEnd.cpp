/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* headNode = new Node(arr[0]);
        Node* currNode = headNode;
        for(int i = 1; i < arr.size(); ++i) {
            Node* newNode = new Node(arr[i]);
            currNode -> next = newNode;
            currNode = currNode -> next;
        }
        return headNode;
    }
};