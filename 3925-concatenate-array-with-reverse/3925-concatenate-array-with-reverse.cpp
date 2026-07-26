//we will use 2 loops
//In first loop it will go through the whole nums array and copy it to ans array
//In second loop it will go through the nums array but it will start from behind 

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans(2*n); //Declared a array of 2n size named as ans
        for (int i=0;i<n;i++){
            ans[i]=nums[i]; //copying the entire nums array to ans
        
        }
        for(int j=n-1;j>=0;j--){
            ans[2*n-j-1]=nums[j]; //copying nums array in reverse to ans
        }
        return ans;
        
    }
};

//Time complexity : O(N)
//Space complexity : O(N)