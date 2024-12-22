//! Majority Element - Leetcode 169

//!Brute Force Approach 
// Time  Complexity :- O(n^2)
// Space Complexity :- O(1)

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();

        for(int &val : arr)
        {
            int freq = 0;
            for(int &ele : arr)
            {
                if(val == ele) freq++;
            }
            if(freq > n/2) return val;
        }
        return -1;
    }
};

//! Optimized Approach
// Time  Complexity :- O(n)
// Space Complexity :- O(n)
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int &val : arr)
        {
            mp[val]++;
        }
        for(auto it : mp)
        {
            if(it.second > arr.size()/2) return it.first;
        }
        return -1;
    }
};

//! Optimized Approach
// Time  Complexity :- O(n logn)
// Space Complexity :- O(1)
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();

        sort(arr.begin(),arr.end());

        int freq = 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1]) freq++;
            else
            {
                if(freq > n/2) return arr[i-1];
                freq = 1;
            }
        }
        if(freq > n/2) return arr[n-1];
        return -1;
    }
};

//! Optimal Approach
//! Moore's Algorithm
// Time  Complexity :- O(n)
// Space Complexity :- O(1)

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int freq = 0;
        int ans = 0;

        for(int i=0;i<arr.size();i++)
        {
            if(freq == 0) 
            {
                freq = 1;
                ans = arr[i];
            }

            else if(ans == arr[i]) freq++;
            
            else freq--;
        }

        //* When In question said that there is not
        //* complusory have element which is more than n/2
        //* then we can use below code
        
        int cnt = 0;
        for(int &val : arr)
        {
            if(val == ans) cnt++;
        }

        return cnt > (arr.size()/2) ? ans : -1;
    }
};