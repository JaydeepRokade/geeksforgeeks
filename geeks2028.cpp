class Solution {
    private void left(Node root,int level,List<Integer> ans){
        if(root==null)return;
        if(ans.size()==level)ans.add(root.data);
        if(root.left!=null)left(root.left,level+1,ans);
        if(root.right!=null)left(root.right,level+1,ans);
    }
    ArrayList<Integer> leftView(Node root) {
        ArrayList<Integer> ans=new ArrayList<>();
        left(root,0,ans);
        return ans;
    }
}

..... see less

