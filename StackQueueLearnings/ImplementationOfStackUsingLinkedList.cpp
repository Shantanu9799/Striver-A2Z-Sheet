//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;

    StackNode(int a) {
        data = a;
        next = NULL;
    }
};


// } Driver Code Ends

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode *newNode = new StackNode(x);
        newNode -> next = top;
        top = newNode;
    }

    int pop() {
        // code here
        if(top == NULL) return -1;
        StackNode *temp = top;
        top = top -> next;
        int tmpData = temp -> data;
        delete temp;
        return tmpData;
    }

    MyStack() { top = NULL; }
};