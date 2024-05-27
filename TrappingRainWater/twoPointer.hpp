class Solution {
    public:
    long long trappingWater(int arr[], int n){
        int leftIdx = 0, rightIdx = n-1;
        long long left_max = 0, right_max = 0;
        
        long long max_water = 0;
        
        while(leftIdx < rightIdx) {
            if(arr[leftIdx] < arr[rightIdx]) {
                if(arr[leftIdx] > left_max) {
                    left_max = arr[leftIdx];
                } else {
                    max_water += (left_max - arr[leftIdx]);
                }
                leftIdx++;
            } else {
                if(arr[rightIdx] > right_max) {
                    right_max = arr[rightIdx];
                } else {
                    max_water += (right_max - arr[rightIdx]);
                }
                rightIdx--;
            }
        }
        return max_water;
    }
};
