class Solution {
  public:
    
    bool isBSThelper(Node*root,int min,int max)
    {
        if(root==NULL)
        {
            return true;
        }
        
        if(root->data<min || root->data>max)
        {
            return false;
        }
        
        bool isleftok=isBSThelper(root->left,min,root->data-1);
        bool isrightok=isBSThelper(root->right,root->data,max);
        
        return isleftok&&isrightok;
    }
    bool isBST(Node* root) {
    
        return isBSThelper(root,INT_MIN,INT_MAX);
    }
};
