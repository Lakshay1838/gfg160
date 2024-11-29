class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int ans = 0;
        vector<int> minVal(n);
        
        
        int mini = INT_MAX; 
        for(int i=0;i<n;i++){
            mini = min(mini,prices[i]);
            minVal[i] = mini;
        }
        
        
        int profit = 0;
        int ele = minVal[0];
        for(int i=1;i<n;i++){
            if(prices[i] > ele){
                profit = max(profit,prices[i] - ele);
            }else{
                // (ele != minVal[i]){
                ans += profit;
                ele = minVal[i];
                profit = 0;
            }
        }
        ans += profit;
        return ans;
    }
};