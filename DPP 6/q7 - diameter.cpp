    int res = 0;
    int height(TreeNode* root){
        int temp;
        
        if(root == NULL){
            return 0;
        }
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        int ans = lh + rh;
        res = max(ans, res);
        
        return temp = max(lh, rh) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        
        return res;
    }