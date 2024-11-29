// You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

// Note: The answer should be returned in an increasing format.

// Examples:

// Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
// Output: [5, 6]
// Explanation: 5 and 6 occur more n/3 times.
// Input: arr[] = [1, 2, 3, 4, 5]
// Output: []
// Explanation: no candidate occur more than n/3 times.
// Constraint:
// 1 <= arr.size() <= 106
// -109 <= arr[i] <= 109


// Pseudo code
// same as majority element 2 
// just maintain the 2 candidates 
// if equal to ele1 then increement the count of 1 
// if equal to ele2 then increement the count of 2
// if count of 1 is 0 then initialize to current element and (increement count or equals to 1) 
// if count of 2 is 0 then initialize to current element and (increement count or equals to 1)
// else decreement count of both simple 

// after check the count of 2 candidates if greater then n/3 then push to array then sort and return;


class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int ele1=-1;
        int ele2=-1;
        
        int count1=0;
        int count2=0;
        
        int i=0;
        while(i<arr.size()){
            if(arr[i] == ele1){
                count1++;
            }else if(arr[i] == ele2){
                count2++;
            }
            else if(count1 == 0){
                ele1 = arr[i];
                count1=1;
            }else if(count2==0){
                ele2=arr[i];
                count2=1;
            }else{
                count1--;
                count2--;
            }
            i++;
        }
        count1=0;
        count2=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] == ele1)  count1++;
            if(arr[i] == ele2)  count2++;
        }
        vector<int> ans;
        if(count1 > arr.size()/3)    ans.push_back(ele1);
        if(count2 > arr.size()/3)    ans.push_back(ele2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};