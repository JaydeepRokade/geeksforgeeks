class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node* newNode = new Node();
        newNode->data = x;
        if(!head){
            return newNode;
        }
        if(!head->next){
            if(head->data>x){
                newNode->next = head;
                head->prev = newNode;
                return newNode;
            }
            else{
                newNode->prev = head;
                head->next = newNode;
                return head;
            }
        }
        Node* prevNode = head, *currNode = head->next;
        if(x<head->data){
            newNode->next = head;
            head->prev = newNode;
            return newNode;
        }
        while(currNode){
            if(prevNode->data<=x && currNode->data>=x){
                newNode->next = currNode;
                newNode->prev = prevNode;
                prevNode->next = newNode;
                currNode->prev = newNode;
                return head;
            }
            else{
                prevNode = currNode;
                currNode = currNode->next;
            }
        }
        prevNode->next = newNode;
        newNode->prev = prevNode;
        return head;
    }
};
