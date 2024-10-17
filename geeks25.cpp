class Solution {
  public:
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        Node* head1=head;
        Node* head2=head->next;
        Node*l1=head;
        Node*l2=head->next;
        
        while(l1 && l2){
            if(l1->next) {
                l1->next=l1->next->next;
                
            }
            l1=l1->next;
            if(l2->next) {
                l2->next=l2->next->next;
                
            }
            l2=l2->next;
        }
        return {head1,head2};
    }
};

