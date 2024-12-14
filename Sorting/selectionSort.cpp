//! Selection Sort - GFG Question
// Time  Complexity :- O(n^2)
// Space Complexity :- O(1)

//! It's For Ascending order
class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++)
        {
            int mini = i;
            
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] < arr[mini]) mini = j;
            }
            
            if(mini != i) swap(arr[i] , arr[mini]);
        }
    }
};



//! It's For Decending order
class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++)
        {
            int maxi = i;
            
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] > arr[maxi]) maxi = j;
            }
            
            if(maxi != i) swap(arr[i] , arr[maxi]);
        }
    }
};