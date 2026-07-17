class Solution {
public:
    int findLHS(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int low = 0;
        int maxLen = 0;
        
        for(int high = 0; high<nums.size(); high++) {
            while(nums[high]-nums[low]>1) {
                low++;
            }

            if(nums[high]-nums[low]==1) {
                maxLen = max(maxLen, high-low+1);
            }
        }

        return maxLen;
    }
};