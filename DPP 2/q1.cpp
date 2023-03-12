// rotating matrix by 90 degree

    void execute(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        for(int i = 0; i < n/2; i++){
            swap(matrix[i], matrix[n-i-1]);
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
    }