//! Sort 0s, 1s and 2s ( GFG + Leetcode )
//? You can use bubble sort , insertion sort or any other sorting algorithm.

//! Brute Force Approach
// Time  Complexity :- O(n logn)
// Space Complexity :- O(1)

class Solution {
  public:
    void sort012(vector<int>& arr) {
        sort(arr.begin(),arr.end());
    }
};


//! Optimized Approach (using Two Loop)
// Time  Complexity :- O(n)
// Space Complexity :- O(1)

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0) count0++;
            else if(arr[i]==1) count1++;
            else count2++;
        }
        
        for(int i=0;i<arr.size();i++)
        {
            if(i<count0) arr[i] = 0;
            else if(i<(count0+count1))arr[i] = 1;
            else arr[i] = 2;
        }
    }
};


//! Dutch National Flag Approach (Optimal Approach using Only One Loop )
// Time  Complexity :- O(n)
// Space Complexity :- O(1)

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int low = 0 , mid = 0 , high = arr.size() - 1;
        
        while( mid <= high )
        {
            if(arr[mid] == 0)
            {
                swap(arr[low] ,arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
};