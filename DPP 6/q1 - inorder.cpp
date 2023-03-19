    void inorder(TreeNode* root, vector<int> &vr){
        if(root == NULL){
            return;
        }
        
        inorder(root -> left, vr);
        vr.push_back(root -> val);
        inorder(root -> right, vr);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vr;
        
        inorder(root, vr);
        
        return vr;
    }