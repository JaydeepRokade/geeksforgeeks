/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        unordered_map<Node*,int>map; 
        
        while(head1){
            map[head1]++; 
            head1 = head1->next; 
        }
        while(head2){
            if(map.find(head2)!= map.end()){
                return head2->data; 
            }
            head2 = head2->next; 
        }
        
        return -1; 
    }
};
