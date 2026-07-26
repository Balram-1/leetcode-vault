class Solution {
// Approach
// We will sort the array first. After sorting, any duplicates will appear next to each other.
// Then we will run a single loop to check consecutive elements.
// If nums[i] == nums[i-1], then we found a duplicate → return true.
// Otherwise, if no duplicates are found, return false at the end.

public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array in ascending order

        for (int i = 1; i < nums.size(); i++) { // Loop starts from index 1
            if (nums[i] == nums[i-1]) { // Compare current element with previous
                return true; // Duplicate found
            }
        }
        return false; // No duplicates found
    }
};

// Time complexity : O(N log N) because of sorting
// Space complexity : O(1) 
