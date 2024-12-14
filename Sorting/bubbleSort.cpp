//! Bubble Sort - GFG Question
// Time  Complexity :- O(n^2)
// Space Complexity :- O(1)
//? for best case :- O(n) time complexity

//! It's For Ascending Order
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<(n-i-1);j++)
            {
                if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
            }
        }
    }
};

//! Optimal Approach
//! It's For Ascending Order
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i=0;i<n-1;i++)
        {
            bool flag = true;
            for(int j=0;j<(n-i-1);j++)
            {
                if(arr[j]>arr[j+1]) {
                    swap(arr[j],arr[j+1]);
                    flag = false;
                }
            }
            if(flag) break;
        }
    }
};


//! It's For Decending Order
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<(n-i-1);j++)
            {
                if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);
            }
        }
    }
};

//! Optimal Approach
//! It's For Decending Order
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i=0;i<n-1;i++)
        {
            bool flag = true;
            for(int j=0;j<(n-i-1);j++)
            {
                if(arr[j]<arr[j+1]) {
                    swap(arr[j],arr[j+1]);
                    flag = false;
                }
            }
            if(flag) break;
        }
    }
};