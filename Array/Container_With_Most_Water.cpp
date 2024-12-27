//! Container With Most Water :- GFG and Leetcode Question

//* Time  Complexity :- O(n^2)
//* Space Complexity :- O(1)
class Solution {
public:
    int maxArea(vector<int>& arr) {
        int result = 0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int height = min(arr[i],arr[j]);
                int width = j - i;
                int area = height * width;
                result = max(result,area);
            }
        }
        return result;
    }
};


//! Two Pointer Approach
//* Time  Complexity :- O(n)
//* Space Complexity :- O(1)
class Solution {
public:
    int maxArea(vector<int>& arr) {
        int ans = 0;
        int i = 0;
        int j = arr.size() - 1;
        
        while(i<j)
        {
            int height = min(arr[i],arr[j]);
            int width = j - i;
            int area = height * width;
            ans = max(ans,area);

            if(arr[i]<=arr[j]) i++;
            else j--;
        }
        
        return ans;
    }
};