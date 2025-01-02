// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node *first = new Node(arr[0]);
        Node *nextNode = first;
        for(int i = 1; i < arr.size(); ++i) {
            Node *newNode = new Node(arr[i]);
            newNode -> prev = nextNode;
            nextNode -> next = newNode;
            nextNode = nextNode -> next;
        }
        return first;
    }
};
