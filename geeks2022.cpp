class solutriob{
pair<int,int> helper(Node* root){
         if(root == NULL) return {0,0};
         
         auto left = helper(root->left);
         auto right = helper(root->right);
         
         //sum including the nodes
         int a = root->data + left.second + right.second;
         
         //sum excluding the nodes
         
         int b = max(left.first,left.second) + max(right.first, right.second);
         
         
         return {a,b};
        }
    
    int getMaxSum(Node *root) 
    {
        auto ans = helper(root);
        return max(ans.first,ans.second);
        
    }
};



