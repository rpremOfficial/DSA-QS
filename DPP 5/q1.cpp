    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        int dp[n];
        dp[0] = 1;
        
        int maxi = 0;
        for(int i = 1; i < n; i++){
            dp[i] = 1;
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i]){
                    if(dp[j] + 1 > dp[i]){
                        dp[i] = dp[j] + 1;
                    }
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            if(dp[i] > maxi) maxi = dp[i];
        }
        
        return maxi;
    }