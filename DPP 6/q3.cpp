    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root == NULL){
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        int n;
        while(!q.empty()){
            vector<int> temp;
            
            n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                
                temp.push_back(node -> val);
                
                if(node -> left != NULL){
                    q.push(node -> left);
                }
                if(node -> right != NULL){
                    q.push(node -> right);
                }
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }