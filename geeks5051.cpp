class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> row(n);
        
        int maxSum = 0;
          for(int i = 0; i < n; i++){
            
            int rowSum = 0;
            int colSum = 0;
            for(int j = 0; j < n; j++){
                rowSum += mat[i][j];
                colSum += mat[j][i];
            }
            
            int rowSum = 0;
            int colSum = 0;
           
            row[i] = rowSum;
            maxSum = max({maxSum, rowSum, colSum});
        }
        
        int minOperation = 0;
        for(int i = 0; i < n; i++){
            
            minOperation += abs(maxSum - row[i]);
        }
        
        return minOperation;
    }
};  
