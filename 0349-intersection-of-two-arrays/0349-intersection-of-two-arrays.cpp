class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> result;

        for(int num : nums2){
            if(set1.count(num)){
                result.insert(num);

            }
        }

    vector<int> ans(result.begin(),result.end());   
    return ans;
    }
};

//Time complexity : O(N+M)
//Space complexity: O(N)
// Approach: Use unordered_set to store nums1, 
// then check each element of nums2 and insert into result set. so that no duplicates will be there
//at last made ans vector and pushed 