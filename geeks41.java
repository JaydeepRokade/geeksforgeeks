class Solution {
    public boolean isLengthEven(Node head) {

        boolean flag = false;
        if(head.next==null){
            return false;
        }
        Node curr = head;
        while(curr.next!=null){
            curr = curr.next;
            flag = !flag;
        }
        return flag;
    }
}
