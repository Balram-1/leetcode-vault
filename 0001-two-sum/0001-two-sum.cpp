class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size(); //intilize len with the length of array
        vector<int>rep;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i]+nums[j]==target){ //we ran 2 loops and now it willl check if the sum is equals to the target 
                    rep.push_back(i);
                    rep.push_back(j);
                    break;
                    

                }
            }
        }
        return rep;
    }
};

//Time complexity : O(N^2)
//Space complexity : O(1)