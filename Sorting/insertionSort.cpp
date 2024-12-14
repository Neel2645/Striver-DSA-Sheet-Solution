//! Insertion Sort - GFG Question
// Time  Complexity :- O(n^2)
// Space Complexity :- O(1)

//! Using Swap Function
//! It's For Ascending order
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            int j = i;
            while(j>0 and arr[j] < arr[j-1]) {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
};


//! Another Approach using previous element and without swapping
//! It's For Ascending order
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            int curr = arr[i];
            int prev = i-1;

            while(prev>=0 and curr < arr[prev]) {
               arr[prev+1] = arr[prev];
               prev--;
            }

            arr[prev+1] = curr;
        }
    }
};



//! Using Swap Function
//! It's For Decending order
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            int j = i;
            while(j>0 and arr[j] > arr[j-1]) {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
};


//! Another Approach using previous element and without swapping
//! It's For Decending order
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            int curr = arr[i];
            int prev = i-1;

            while(prev>=0 and curr > arr[prev]) {
               arr[prev+1] = arr[prev];
               prev--;
            }

            arr[prev+1] = curr;
        }
    }
};
