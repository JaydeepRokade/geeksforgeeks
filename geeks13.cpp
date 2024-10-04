class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        // code here
        Node* previous = head;
        Node* curr = head -> next;
        while(curr != head){
            Node* nextNode = curr -> next;
            curr -> next = previous;
            previous = curr;
            curr  = nextNode;
        }
        head -> next = previous;
        return previous;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        Node* curr = head -> next;
        Node* previous =  head;
        if(head -> data == key){
            while(previous -> next != head){
                previous = previous -> next;
            }
            previous -> next = head -> next;
            Node* temp = head;
            head = head -> next;
            if(temp == head){
                delete temp;
                return NULL;
            }
            delete temp;
            return head;
        }
        while(curr != head){
            if(curr -> data == key){
                Node* nextNode = curr -> next;
                
                previous -> next = nextNode;
                
                delete curr;
                return head;
            }
            previous = curr;
            curr = curr -> next;
        }
        return head;
    }
};
