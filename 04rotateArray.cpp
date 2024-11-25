class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        
        int n = arr.size();
        
        if(d % n == 0)  return;
        else d=d%n;
        
        vector<int> v;
        for(int i=d;i<arr.size();i++){
            v.push_back(arr[i]);
        }
        for(int i=0;i<d;i++){
            v.push_back(arr[i]);
        }
        arr=v;
    }
};