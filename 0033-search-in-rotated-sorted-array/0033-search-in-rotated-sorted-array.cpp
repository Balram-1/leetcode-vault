class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            // Prevent potential integer overflow
            int mid = left + (right - left) / 2; 
            
            if (nums[mid] == target) {
                return mid;
            }
            
            // Determine if the left half is properly sorted
            if (nums[left] <= nums[mid]) {
                // Check if the target falls within the sorted left half's range
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1; // Narrow search space to the left
                } else {
                    left = mid + 1;  // Target must be in the right half
                }
            } 
            // If the left isn't sorted, the right half must be sorted
            else {
                // Check if the target falls within the sorted right half's range
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;  // Narrow search space to the right
                } else {
                    right = mid - 1; // Target must be in the left half
                }
            }
        }
        
        return -1; // Target was not found in the array
    }
};


//TIME COMPLEXITY :  Log(n)