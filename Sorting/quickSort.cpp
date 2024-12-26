//! Quick Sort - GFG Question
// Time  Complexity :- O(n logn)
// Space Complexity :- O(1)
// For Worst Case : Time Complexity :- O(n^2)

//* Here We choose last element as a pivot 
//* For Ascending Order
class Solution {
  public:
    void quickSort(vector<int>& arr, int st, int end) {
        if(st<end){
            int pivotIndex = partition(arr,st,end);
            quickSort(arr,st,pivotIndex-1);
            quickSort(arr,pivotIndex+1,end);
        }
    }

  public:
    int partition(vector<int>& arr, int st, int end) {
        int idx = st - 1;
        int pivot = arr[end];
        for(int j=st;j<end;j++)
        {
            if(arr[j]<=pivot)
            {
                idx++;
                swap(arr[j],arr[idx]);
            }
        }
        idx++;
        swap(arr[idx],arr[end]);
        return idx;
    }
};


//* Here We choose first element as a pivot 
//* For Ascending Order
class Solution {
  public:
    void quickSort(vector<int>& arr, int st, int end) {
        if(st<end){
            int pivotIndex = partition(arr,st,end);
            quickSort(arr,st,pivotIndex-1);
            quickSort(arr,pivotIndex+1,end);
        }
    }

  public:
    int partition(vector<int>& arr, int st, int end) {
        int idx = st + 1;
        int pivot = arr[st];
        for(int j=st+1;j<=end;j++)
        {
            if(arr[j]<=pivot)
            {
                swap(arr[j],arr[idx]);
                idx++;
            }
        }
        idx--;
        swap(arr[idx],arr[st]);
        return idx;
    }
};

//* Here We choose last element as a pivot 
//* For Descending Order
class Solution {
  public:
    void quickSort(vector<int>& arr, int st, int end) {
        if(st<end){
            int pivotIndex = partition(arr,st,end);
            quickSort(arr,st,pivotIndex-1);
            quickSort(arr,pivotIndex+1,end);
        }
    }

  public:
    int partition(vector<int>& arr, int st, int end) {
        int idx = st - 1;
        int pivot = arr[end];
        for(int j=st;j<end;j++)
        {
            if(arr[j]>=pivot)
            {
                idx++;
                swap(arr[j],arr[idx]);
            }
        }
        idx++;
        swap(arr[idx],arr[end]);
        return idx;
    }
};


//* Here We choose first element as a pivot 
//* For Descending Order
class Solution {
  public:
    void quickSort(vector<int>& arr, int st, int end) {
        if(st<end){
            int pivotIndex = partition(arr,st,end);
            quickSort(arr,st,pivotIndex-1);
            quickSort(arr,pivotIndex+1,end);
        }
    }

  public:
    int partition(vector<int>& arr, int st, int end) {
        int idx = st + 1;
        int pivot = arr[st];
        for(int j=st+1;j<=end;j++)
        {
            if(arr[j]>=pivot)
            {
                swap(arr[j],arr[idx]);
                idx++;
            }
        }
        idx--;
        swap(arr[idx],arr[st]);
        return idx;
    }
};