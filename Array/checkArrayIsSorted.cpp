//! Chech If the given array is sorted or not :- GFG Question
// Time  Complexity :- O(n)
// Space Complexity :- O(1)

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] > arr[i+1]) return false;
        }
        return true;
    }
};


//! Using Recursion
// Time  Complexity :- O(n)
// Space Complexity :- O(n)

class Solution {
  public:
  
    bool isSorted(vector<int>&arr,int n)
    {
        if(n==0 || n==1) return true;
        
        if(arr[n-1] < arr[n-2]) return false;
        
        return isSorted(arr,n-1);
    }
  
    bool arraySortedOrNot(vector<int>& arr) {
        return isSorted(arr,arr.size());
    }
};