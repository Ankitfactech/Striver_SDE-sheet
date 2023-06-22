// solution for find maximum no. of consecutive 1's .

// platform- Leetcode .

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
            }
           
             if(count > ans){
                ans = count;
            }
            else if(arr[i]!=1){
                count = 0;
            }
        }
        return ans;
    }  

};