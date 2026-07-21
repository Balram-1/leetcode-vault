class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high=nums.size(),mid; //declared the low ,high and mid 
        if(target>nums[high-1]){ //the target is not in the array so we have to return the last number
            return high;
        }
        while(low<=high){
            mid=(low+high)/2; //declared mid which is addtion of low and high/2
            if(nums[mid]==target){
                return mid;   //if target is the mid return mid
            }
            if(target<nums[mid]){
                high=mid-1; //reduce the high as the target isnt there
            }else{
                low=mid+1;
            }
        }
        return low;
        
    }
};