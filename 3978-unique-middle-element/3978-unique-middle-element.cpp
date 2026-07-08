class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
         int a = nums[(nums.size()-1)/2] ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==a && i!=(nums.size()-1)/2){
                return false ; 
            }
        }
        return true ; 
    }
};