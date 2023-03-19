    void postorder(TreeNode* root, vector<int> &vr){
        if(root == NULL){
            return;
        }
        postorder(root -> left, vr);
        postorder(root -> right, vr);
        vr.push_back(root -> val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vr;
        
        postorder(root, vr);
        
        return vr;
    }