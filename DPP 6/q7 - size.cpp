    int count = 0;
    int countNodes(TreeNode* root) {
        if(root == 0){
            return 0;
        }
        
        int lh = countNodes(root -> left);
        int rh = countNodes(root -> right);
        
        count = lh + rh + 1;
        return count;
    }