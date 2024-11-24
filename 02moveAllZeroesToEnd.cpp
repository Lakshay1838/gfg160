#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        vector<int> v;
        int zcount=0;
        for(int n:arr){
            if(n!=0){
                v.push_back(n);
            }else   zcount++;
        }
        while(zcount--){
            v.push_back(0);
        }
        arr = v;
    }
};