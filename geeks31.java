class Solution {
    public int sumOfLastN_Nodes(Node head, int n) {
         int sum=0;
         int count=0;
         Node temp=head;
         while(temp.next!=null){
             temp = temp.next;
             count++;
         }
         for(int i=0;i<=count;i++){
             if(i>count-n){
                 sum=sum+head.data;
             }
             head = head.next;
         }
         return sum;
    }
}
