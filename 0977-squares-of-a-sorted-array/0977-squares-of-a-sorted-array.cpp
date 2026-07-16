class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> square;

        for(int i=0; i<nums.size(); i++) {
            int sq = nums[i]*nums[i];
            square.push_back(sq);
        }

        // for(int j=0; j<square.size(); j++) {
        //     if(square[j]>square[j+1]) {
        //         swap(square[j], square[j+1]);
        //     }
        // }

        sort(square.begin(), square.end());

        return square;
    }
};