/*
   Longest subsequence-1
   Given an integer array a[] of size n, find the length of the longest subsequence such that the absolute difference between adjacent elements is 1.
*/

class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        std::vector<int> dp(n,1);
        
        for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (std::abs(a[i] - a[j]) == 1) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        }
        
        int max_element = INT_MIN;
        
        for(int i = 1; i < n; i++) {
            if(max_element < dp[i]) {
                max_element = dp[i];
            }
        }
        
        return max_element;
    }
};
