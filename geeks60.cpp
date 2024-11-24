class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // code here...
         int sum=0;
        
        
        int n=arr.size();
        int ans=arr[0];
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<0)
            sum=0;
            ans=max(ans,sum);
            
        }
        sort(arr.begin(),arr.end());
        if(arr[n-1]<0)
        return arr[n-1];
        return ans;
    }
};
