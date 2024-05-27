class Solution {
    public:
    long long trappingWater(int arr[], int n){
        
        if(n <= 2) {
            return 0;
        }
        
        long long leftArray[n];
        long long rightArray[n];
        
        leftArray[0] = arr[0];
        
        for(int i = 1; i < n; i++) {
            leftArray[i] = std::max(leftArray[i-1],(long long) arr[i]); 
        }
        
        rightArray[n-1] = arr[n-1];
        
        for(int i = (n-2); i >= 0; i--) {
            rightArray[i] = std::max(rightArray[i+1], (long long) arr[i]);
        }
        
        long long unit = 0;
        
        for(int i =0; i < n; i++) {
            long long usableHeight = std::min(leftArray[i],rightArray[i]);
            
            if(usableHeight > arr[i]) {
                unit += (usableHeight -arr[i]);
            }
        }
        
        return unit;
    }
};
