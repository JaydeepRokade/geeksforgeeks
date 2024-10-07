class Solution {
    static Node insert(Node head, int data) {
        // Code Here.
        Node x=new Node(data);
        x.npx=head;
        return x;
    }

    static ArrayList<Integer> getList(Node head) {
        // Code Here.
        ArrayList<Integer> l1=new ArrayList<>();
        Node x=head;
        while(x!=null){
            l1.add(x.data);
            x=x.npx;
        }
        return l1;
    }
}
