  public int maximumProfit(int prices[]) {
        int buy =0;
        int profit =0;
        for(int i =1;i<prices.length;i++){
            if(prices[i]>prices[i-1]){
               buy = prices[i-1];
               profit += prices[i]-buy; 
            }
        }
        return profit;
    }