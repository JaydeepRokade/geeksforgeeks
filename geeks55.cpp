class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
          int n=prices.size();
         int minPrice=INT_MAX;
         int maxProfit=0;
         for(int i=0;i<n;i++)
         {
             minPrice=min(minPrice,prices[i]);
             int profit=prices[i]-minPrice;
             maxProfit=max(maxProfit,profit);
             
         }
        return maxProfit;
    }
};