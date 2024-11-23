#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int maxi = INT_MIN;
        int maxilite = maxi;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] > maxi){
                maxilite=maxi;
                maxi = arr[i];
            }
            if(arr[i] > maxilite && arr[i] < maxi){
                maxilite = arr[i];
            }
        }
        if(maxilite == maxi || maxilite == INT_MIN){
            return -1;
        }
        return maxilite;
    }
};
