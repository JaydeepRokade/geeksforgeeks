class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int ans=0;
        for(int it:arr){
            ans+=(it/k)+(it%k!=0);
        }
        return ans;
    }
};
