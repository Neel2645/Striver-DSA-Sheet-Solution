//! Given an integer array arr.
//! You need to find the maximum sum of a subarray.
//! GFG Question

//* Time  Complexity :- O(n^3)
//* Space Complexity :- O(1)
class Solution {
  public:
  
    int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int sum = 0;
                for(int k=i;k<=j;k++)
                {
                    sum += arr[k];
                }
                mx = max(mx,sum);
            }
        }
        return mx;
    }
};

//* Time  Complexity :- O(n^2)
//* Space Complexity :- O(1)
class Solution {
  public:
  
    int maxSubarraySum(vector<int> &arr) {
        int ans = INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            int sum = 0;
            for(int j=i;j<arr.size();j++)
            {
                sum += arr[j];
                ans = max(ans,sum);
            }
        }
        return ans;
    }
};

//! Kadane's Algorithm
//* Time  Complexity :- O(n)
//* Space Complexity :- O(1)
class Solution {
  public:
  
    int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int ans = INT_MIN;
        int currSum = 0;
        for(int i=0;i<n;i++)
        {
            currSum += arr[i];
            
            ans = max(ans,currSum);
            
            if(currSum < 0) currSum = 0;
        }
        return ans;
    }
};