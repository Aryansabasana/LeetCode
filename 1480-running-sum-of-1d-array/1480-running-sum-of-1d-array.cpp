class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        int sum = 0;

        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            runningSum.push_back(sum);
        }
        // for(int i=0; i<nums.size(); i++) {
        //     runningSum.push_back(accumulate(nums.begin(), nums.begin()+i+1, 0));
        // }

        return runningSum;
    }
};