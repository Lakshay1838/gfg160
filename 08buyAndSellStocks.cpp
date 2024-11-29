class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int mini = INT_MAX;
        int maxProfit = 0;
        
        for(int n:prices){
            mini = min(mini,n);
            maxProfit = max(maxProfit,n - mini);
        }
        return maxProfit;
    }
};