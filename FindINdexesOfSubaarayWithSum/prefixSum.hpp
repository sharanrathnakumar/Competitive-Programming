class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        unordered_map<long long, int> mp;
        long long curr_sum =0;
        
        for(int i =0; i <n; i++) {
            curr_sum += arr[i];
            
            if(curr_sum == s) {
                return { 1, i+1 };
            }
            
            if(mp.find(curr_sum - s) != mp.end()) {
                return { mp[curr_sum - s] + 2, i + 1 };
            }
            
            if (mp.find(curr_sum) == mp.end()) {
                mp[curr_sum] = i;
            }
        }
        
        return {-1};
    }
};
