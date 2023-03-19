    void preorder(TreeNode* root, vector<int> &vr){
        if(root == NULL){
            return;
        }
        
        vr.push_back(root -> val);
        preorder(root -> left, vr);
        preorder(root -> right, vr);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vr;
        
        preorder(root, vr);
        
        return vr;
    }