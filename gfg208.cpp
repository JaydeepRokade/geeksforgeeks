class Solution {
  public:
    // Return the Kth smallest
    void inorderTraversal(Node* root,vector<int> &inorder){
        if(!root)
            return;
        inorderTraversal(root->left,inorder);
        inorder.push_back(root->data);
        inorderTraversal(root->right,inorder);
    }
    int kthSmallest(Node *root, int k) {
        vector<int> inorder;
        inorderTraversal(root,inorder);
        if(k-1> inorder.size())
            return -1;
        return inorder[k-1];
    }
