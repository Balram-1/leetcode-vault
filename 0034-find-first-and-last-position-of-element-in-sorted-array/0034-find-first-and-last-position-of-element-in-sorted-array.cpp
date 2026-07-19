class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(); //get the total numbers in the array
        int first = -1, last = -1; // we will initilize first and last with -1 so that if the target isnt there then it will return -1

        // Find first occurrence of the target
        int low = 0, high = n - 1; //declare and initilize the start and ending 
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) high = mid - 1;
            else low = mid + 1;
            if (nums[mid] == target) first = mid;
        }

        // Find last occurrence
        low = 0, high = n - 1; //Again initilize the start and end 
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= target) low = mid + 1;
            else high = mid - 1;
            if (nums[mid] == target) last = mid;
        }

        return {first, last};
    }
};

//Time Complexity: O(log n)
// Space Complexity: O(1)
