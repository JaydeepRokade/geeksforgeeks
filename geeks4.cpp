class Solution {
 boolean isPalindrome(Node head) {
        // Your code here.....
        if(head==null||head.next==null) return true;
        Node fast=head.next.next;
        Node slow=head;
        while(fast!=null&&fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        Node c1=reverse(slow.next);
        Node c2=head;
        while(c1!=null){
            if(c1.data!=c2.data){
                return false;
            }
            c1=c1.next;
            c2=c2.next;
        }
        return true;
    }
    public Node reverse(Node head){
        Node prev=null;
        Node curr=head;
        while(curr!=null){
            Node temp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
}
