class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int j = 0;
        for(int i=0; i<nums.size()-1; i+=2) {
            j= nums[i];
            while(j>0) {
                ans.push_back(nums[i+1]);
                j--;
            }
        }

        return ans;
    }
};