//! Merge Sort - GFG Question
// Time  Complexity :- O(n logn)
// Space Complexity :- O(n)

class Solution {
  public:
    void mergeSort(vector<int>& arr, int st, int end) {
        if(st>=end) return;
        
        int mid = st + (end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
    
    void merge(vector<int>&arr,int st,int mid,int end)
    {
        vector<int> temp;
        int i = st;
        int j = mid + 1;
        
        while(i<=mid and j<=end)
        {
            if(arr[i]<=arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end)
        {
            temp.push_back(arr[j]);
            j++;
        }
        
        for(int i=0;i<temp.size();i++)
        {
            arr[st+i] = temp[i];
        }
    }
};  